#include "main.h"
/**
 * swap_int - switch two numbers
 * @a: first number
 * @b: secong number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
