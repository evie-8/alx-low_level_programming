#include "main.h"
/**
 * _islower - checks if character is of lowercase
 *
 *@c: parameter for which argument of function is passed
 *
 * Return: 1 if lower case and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
