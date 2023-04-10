#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends file
 * @filename: name of file
 * @text_content: content to be added
 * Return: 1 success -1 fialure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);
	if (text_content == NULL)
		close(x);
	y = write(x, text_content, strlen(text_content));
	if (y == -1)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}
