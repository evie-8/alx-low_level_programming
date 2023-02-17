#include <stdio.h>
/**
 * main - Starting point of code
 *
 * Return: 0 if successful
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
	if (letter == 101)
	{
	letter = 102;
	}
	if (letter == 113)
	{
	letter = 114;
	}
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}

