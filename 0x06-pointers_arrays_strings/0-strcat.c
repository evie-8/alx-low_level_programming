#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - combine two strings
 * @dest: first string
 * @src: second string
 * Return: combined string
 */
char *_strcat(char *dest, char *src)
{
	int j, k, i = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	j = 0;
	while (*src != '\0')
	{
		j++;
		src++;
	}
	for (k = 0; k <= j; k++)
	{
		dest[i + k] = src[k];
	}
	printf("%s\n", dest);
	return (dest);
}
