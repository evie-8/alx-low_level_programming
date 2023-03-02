#include "main.h"
/**
 * reverse_array - change order of array
 * @a: array to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, t, half;

	half = (n - 1) / 2;
	for (i = 0; i <= half; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
