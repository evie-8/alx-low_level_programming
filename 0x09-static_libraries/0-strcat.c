#include "main.h"
/**
 * _strcat - combine two strings
 * @dest: first string
 * @src: second string
 * Return: combined string
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
