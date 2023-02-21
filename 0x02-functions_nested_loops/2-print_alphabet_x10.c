#include "main.h"
/**
  * print_alphabet_x10 - prints lower case alphabet 10 times
  */
void print_alphabet_x10(void)
{
	int i = 1;
	int letter;

	while (i <= 10)
	{
		letter = 97;
		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
