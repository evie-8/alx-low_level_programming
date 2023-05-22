#include "main.h"
/**
 * _isupper - prints if input value is  uppercase
 * @c: the value to be input
 *Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
