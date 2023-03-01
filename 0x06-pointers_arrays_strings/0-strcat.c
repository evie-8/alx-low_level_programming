#include "main.h"
/**
 * _strcat - combine two strings
 * @dest: first string
 * @src: second string
 * Return: combined string
 */
char *_strcat(char *dest, char *src)
{
	int j, i = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
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
