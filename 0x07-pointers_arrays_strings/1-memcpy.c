#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source string
 * @dest: where copy is stored
 * @n: memeory to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; src[i]; i++)
	{
		if (i < n)
		{
			for (j = 0; j < n; j++)
			{
				dest[j] = src[j];
			}
		}
	}
	return (dest);
}
