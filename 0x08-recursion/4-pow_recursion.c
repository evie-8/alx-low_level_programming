#include "main.h"
/**
 * _pow_recursion - multplies the int x, y times by itself
 * @x: the base
 * @y: power
 * Return: the power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
