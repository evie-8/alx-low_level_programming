# include <stdio.h>
# include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: parameter to be passed
 */
void print_to_98(int n)
{
	int  c = n;

	if (n > 98)
	{
	for (c = n; c >= 98; c--)
	{
	printf("%d", c);
	if (c != 98)
	{
	printf(",");
	printf(" ");
	}
	}
	printf("\n");
	}
	else if (n < 98)
	{
	for (c = n; c <= 98; c++)
	{
	printf("%d", c);
	if (c != 98)
	{
	printf(",");
	printf(" ");
	}
	}
	printf("\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}
