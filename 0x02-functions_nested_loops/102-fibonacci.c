#include <stdio.h>
/**
 * main - print first 50 finonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	long int number1 = 1;
	long int number2 = 2;
	int i;
	long int newnumber;

	printf("%ld, %ld, ", number1, number2);
	for (i = 2; i <= 49; i++)
	{
	newnumber = number1 + number2;
	printf("%ld", newnumber);
	if (i != 49)
	{
	printf(",");
	printf(" ");
	number1 = number2;
	number2 = newnumber;
	}
	}
	printf("\n");
	return (0);
}
