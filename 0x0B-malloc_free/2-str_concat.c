#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - combine two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int k;
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 0);
		return (s);
	}
	if (s1 == NULL)
	{
		s = malloc(sizeof(char) * (strlen(s2) + 1));
		if (s == NULL)
			return (NULL);
		for (k = 0; k < strlen(s2); k++)
			s[k] = s2[k];
		s[strlen(s2)] = '\0';
		return (s);
	}
	if (s2 == NULL)
	{
		s = malloc(sizeof(char) * (strlen(s1) + 1));
		if (s == NULL)
			return (NULL);
		strcpy(s, s1);
		return (s);
	}
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < strlen(s1); k++)
		s[k] = s1[k];
	for (k = strlen(s1); k < strlen(s1) + strlen(s2) + 1; k++)
		s[k] = s2[k - strlen(s1)];
	s[strlen(s1) + strlen(s2)] = '\0';
	return (s);
}
