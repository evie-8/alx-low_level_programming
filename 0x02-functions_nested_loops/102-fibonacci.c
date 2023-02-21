#include <stdio.h>
/**
 * main - print first 50 finonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	int number1 = 1;
	int number2 = 2;
	int i;
	unsigned long long int newnumber;

	printf("%d, %d, ", number1, number2);
	for (i = 2; i <= 48; i++)
	{
	newnumber = number1 + number2;
	printf("%lld", newnumber);
	if (i != 48)
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
