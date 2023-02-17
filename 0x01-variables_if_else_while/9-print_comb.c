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
	if (number == 9)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	putchar(number);
	number++;
	}
	putchar('\n');
	return (0);
}
