#include "main.h"
/**
 * rev_string - reverse string at once
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;
	for (i = count; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
