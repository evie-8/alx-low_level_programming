#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define buffer 1024

/**
 * check_error - checks errors
 * @from: file 1
 * @to: file 2
 * @argv: array of strings
 */
void check_error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * file_closed - checks for error in closnig file
 * @n: file descriptor
 */
void file_closed(int n)
{
	int error;

	error = close(n);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}
/**
 * main - copy file to another file
 * @argc: count number of arguments
 * @argv: array of strings
 * Return: 1 success, -1 failure
 */
int main(int argc, char *argv[])
{
	int x, y, z, a = buffer;
	char *c;

	c = malloc(sizeof(char) * buffer);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	y = open(argv[1], O_RDONLY);
	z = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	check_error(y, z, argv);
	while (a == buffer)
	{
		a = read(y, c, buffer);
		if (a == -1)
		{
			free(c);
			check_error(-1, 0, argv);
		}
		x = write(z, c, a);
		if (x == -1)
		{
			free(c);
			check_error(0, -1, argv);
		}
	}
	free(c);
	file_closed(y);
	file_closed(z);
	return (0);
}
