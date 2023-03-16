#include "main.h"
#include <stdlib.h>
/**
 * _is_digit - checks if all characters of a string lie between 0 and 9
 * @s: string
 * Return: 1 if entire characters of string contain 0 to 9 else 0
 */
int _is_digit(char *s)
{
	int j, i = 0;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
		{
		}
		else
			return (0);
	}
	return (1);
}
/**
 * print_number - displays a number
 * @n: number to be printed
 */
void print_number(long int n)
{
	unsigned long int number = n;

	if (n < 0)
	{
		n = n * -1;
		number = n;
		_putchar('-');
	}
	number = number / 10;
	if (number != 0)
		print_number(number);
	_putchar((unsigned long int)n % 10 + '0');
}
/**
 * strings - prints string
 * @s: string
 */
void strings(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	strings(s + 1);
}

/**
 * main - check code
 * @argc: number of arguments on command line
 * @argv: array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *s = "Error\n";
	unsigned long num, product = 1;
	int j;

	if (argc != 3)
	{
		strings(s);
		exit(98);
	}
	for (j = 1; j < argc; j++)
	{
		if (_is_digit(argv[j]))
		{
			num = atoi(argv[j]);
			product *= num;
		}
		else
		{
			strings(s);
			exit(98);
		}
	}
	print_number(product);
	_putchar('\n');
	return (0);
}
