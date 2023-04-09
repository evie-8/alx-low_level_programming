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
	char *c = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	y = read(x, c, letters);
	if (y == -1)
		return (0);
	z = write(1, c, y);
	if (z == -1)
		return (0);
	return (z);
}

