#include "main.h"
/**
 * _isalpha - checks if entered value is a letter
 *
 *@c: paramter to be passed to function
 *
 *Return: 1 if its a letter and 0 anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
