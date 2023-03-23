#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints any value passed
 * @format: array of characters
 */
void print_all(const char * const format, ...)
{
	int i, x;
	char c, *s, *sep = ", ";
	float f;
	va_list ap;

	va_start(ap, format);
	x = 1;
	while (format[x - 1])
	{
		switch (format[x - 1])
		{
			case 'c':
			c = (char)va_arg(ap, int);
			printf("%c", c);
			break;
			case 'i':
			i = va_arg(ap, int);
			printf("%d", i);
			break;
			case 'f':
			f = (float)va_arg(ap, double);
			printf("%f", f);
			break;
			case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
			default:
			x++;
			continue;
		}
		if (x != (int)strlen(format))
			printf("%s", sep);
		x++;
	}
	va_end(ap);
	printf("\n");
}
