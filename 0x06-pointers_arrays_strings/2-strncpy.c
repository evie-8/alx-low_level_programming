#include "main.h"
/**
 * _strncpy - copy string
 * @dest: where copied string is to be stored
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
