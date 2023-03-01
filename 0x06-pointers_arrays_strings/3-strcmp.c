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
	int value = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				value = -15;
			else if (s1[i] > s2[i])
				value = 15;
		break;
		}
	}
	return value;
}
