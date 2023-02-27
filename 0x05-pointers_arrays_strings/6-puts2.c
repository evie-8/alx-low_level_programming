#include "main.h"
/**
 * puts2 - prints even position
 * @str: string
 */
void puts2(char *str)
{
	int i;
	char t;
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str -= count;
	for (i = 0; i <= count; i = i + 2)
	{
		t = *(str + i);
		if (t != '\0')
			_putchar(t);
	}
	_putchar('\n');
}
