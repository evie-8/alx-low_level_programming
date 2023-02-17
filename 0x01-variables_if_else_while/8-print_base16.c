#include <stdio.h>
/**
 * main -start of code
 *
 * Return: 0 if success
 */
int main(void)
{
	int letter = 97;
	int number = 48;

	while (number <= 57)
	{
	putchar(number);
	number++;
	}
	while (letter <= 102)
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
