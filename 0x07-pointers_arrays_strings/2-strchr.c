#include "main.h"
/**
 * _strchr - displays first occurence of a specified character
 * @s: string
 * @c: character to be found
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
