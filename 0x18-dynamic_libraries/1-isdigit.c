#include "main.h"
/**
 * _isdigit - checks if entry is between 0 and 9
 * @c: entry being checked
 * Return: 1 if a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
