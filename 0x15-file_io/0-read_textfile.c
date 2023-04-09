#include "main.h"
/**
 * read_textfile - reads content of a file
 * @filename: name of file
 * @letters: number of letters
 * Return: letters that where read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int  x, y, z;
	char *c = malloc(sizeof(char) * letters + 1);

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == 0)
		return (0);
	if (c == NULL)
	{
		close(x);
		return (0);
	}
	y = read(x, c, letters);
	if (y == 0)
	{	free(c);
		close(x);
		return (0);
	}
	c[y] = '\0';
	z = write(STDOUT_FILENO, c, y);
	if (z == 0)
	{
		free(c);
		close(x);
		return (0);
	}
	free(c);
	close(x);
	return (y);
}
