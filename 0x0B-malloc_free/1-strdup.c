#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a pointer to a new string which is a duplicate of the string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int k, i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		copy[k] = str[k];
	}
	copy[i] = '\0';
	return (copy);
}
