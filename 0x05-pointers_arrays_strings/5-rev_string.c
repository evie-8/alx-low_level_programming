#include "main.h"
/**
 * rev_string - reverse string at once
 * @s: string
 */
void rev_string(char *s)
{
	int count = 0;
	char *b = s;
	char *e = s;
	char t;

	while (*e != '\0')
	{
		count++;
		e++;
	}
	e--;
	while (b < e)
	{
		t = *b;
		*b = *e;
		*e = t;
		b++;
		e--;
	}
}
