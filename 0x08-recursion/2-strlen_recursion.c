#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: string whose length we want
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i  = _strlen_recursion(s + 1);

	return (i + 1);
}
