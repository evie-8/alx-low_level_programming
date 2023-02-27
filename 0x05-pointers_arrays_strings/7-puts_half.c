#include "main.h"
/**
 * puts_half - prints last half of digits
 * @str: string
 */
void puts_half(char *str)
{
	int i, half;
	int count = 0;
	char t;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str -= count;
	if (count % 2 != 0)
		half = (count - 1) / 2;
	else
		half = count / 2;
	for (i = half; i <= count; i++)
	{
		t = *(str + i);
		if (t != '\0')
			_putchar(t);
	}
	_putchar('\n');
}
