#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 success
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
	putchar(number);
	putchar(',');
	putchar(' ');
	number++;
	}
	putchar('\n');
	return (0);
}
