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

/**
 * is_palindrome - string is the same when red backwards
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	char *a = s;
	char *z = s + i - 1;

	while (a < z)
	{
		if (*a != *z)
			return (0);
		a++;
		z--;
	}
	return (1);
}
