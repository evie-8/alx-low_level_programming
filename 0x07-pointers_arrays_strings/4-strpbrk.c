#include "main.h"
/**
 * _strpbrk - displays first occurence of a specified character
 * @s: string
 * @accept: character to be found
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		}
	}
	if (s[i] == accept[j])
	{
		return (s + i);
	}
	return (0);
}
