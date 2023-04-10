#include "main.h"
#include <string.h>
/**
 * create_file - creates file if it doesn't exist
 * @filename: name of file
 * @text_content: content to be put in file
 * Return: 1 for success -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	x = open(filename, O_WRONLY | O_CREAT |O_TRUNC, 0600);
	if (x == -1)
		return (-1);
	y = write(x, text_content, strlen(text_content));
	if (y == -1)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}
