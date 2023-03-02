#include "main.h"
/**
 * reverse_array - change order of array
 * @a: array to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i <= (n - 1) / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
