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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
		n = strlen(s2);
	s = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (i = strlen(s1); i < strlen(s1) + n; i++)
		s[i] = s2[i - strlen(s1)];
	s[i] = '\0';
	return (s);
}
