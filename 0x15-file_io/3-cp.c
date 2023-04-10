#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * reads - reads file
 * @filename: name of file
 * @b: size
 * Return: string
 */
char *reads(char *filename, size_t b)
{
	int x, y, z;
	char *c;

	c = malloc(sizeof(char) * b);
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	y = read(x, c, b);
	if (y == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		free(c);
		z = close(x);
		exit(98);
	}
	c[y] = '\0';
	z = close(x);
	if (z == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	return (c);
}
/**
 * main - copy file to another file
 * @argc: count number of arguments
 * @argv: array of strings
 * Return: 1 success, -1 failure
 */
int main(int argc, char *argv[])
{
	int z, a, b;
	char *c;

	c = malloc(sizeof(char) * 1024);
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = reads(argv[1], 1024);
	umask(0);
	z = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (z == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	a = write(z, c, strlen(c));
	if (a == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(c);
		b = close(z);
		exit(99);
	}
	b = close(z);
	if (b  == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", z);
		exit(100);
	}
	return (0);
}
