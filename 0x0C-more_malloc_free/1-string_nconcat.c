#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - contatenates string upto specific byte
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 0);
		return (s);
	}
	if (s1 == NULL)
	{
		s = malloc(sizeof(char) * (n + 1));
	for (i = 0; i < n; i++)
		s[i] = s2[i];
	s[n] = '\0';
	return (s);
	}
	if (s2 == NULL)
	{
		s = malloc(sizeof(char) * (strlen(s1) + 1));
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	s[strlen(s1)] = '\0';
	return (s);
	}
	s = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (i = strlen(s1); i < strlen(s1) + n; i++)
		s[i] = s2[i - strlen(s1)];
	s[strlen(s1) + n] = '\0';
	return (s);
}
