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
 * is_palindrome2 - compares strings
 * @s: original strig
 * @end: string we are comparing to
 * Return: 1 if palindrome
 */
int is_palindrome2(char *s, char *end)
{
	if (s >= end)
		return (1);
	if (*s != *end)
		return (0);
	return (is_palindrome2(s + 1, end - 1));
}
/**
 * is_palindrome - string is the same when red backwards
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i <= 1)
		return (1);
	return (is_palindrome2(s, s + i - 1));
}
