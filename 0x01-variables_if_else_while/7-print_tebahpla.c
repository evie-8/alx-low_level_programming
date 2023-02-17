#include <stdio.h>
/**
 * main - start of code
 *
 * Return: 0 if its a success
 */
int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
	putchar(letter);
	letter--;
	}
	putchar('\n');
	return (0);
}
