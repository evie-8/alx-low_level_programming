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
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
