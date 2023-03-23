#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - prints numbers
 * @separator: separates two numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
