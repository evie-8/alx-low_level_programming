#include "main.h"
/**
 * _strncat - append upto a cetain point
 * @dest: first string
 * @src: string to be appended to dest
 * @n: number of characters to be appened to dest
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
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
		if (j >= n)
		{
			break;
		}
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
