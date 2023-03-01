#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: a number
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	while (*s1 != '\0')
	{
		j++;
		s1++;
	}
	i = 0;
	while (*s2 != '\0')
	{
		i++;
		s2++;
	}
	if (j == i)
		return (0);
	else if (j < i)
		return (-15);
	else
		return (15);
}
