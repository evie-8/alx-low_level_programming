#include "main.h"
/**
 * leet - encodes certain characters
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	char word[] = "AaEeOoTtLl";
	char replace[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == word[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}

