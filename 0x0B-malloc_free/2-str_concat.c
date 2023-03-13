#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combine two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j, k, i = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = i; k < i + j + 1; k++)
		s[k] = s2[k - i];
	s[i + j] = '\0';
	return (s);
}
