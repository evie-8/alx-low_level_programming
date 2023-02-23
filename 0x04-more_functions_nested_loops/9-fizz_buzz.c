#include <stdio.h>
/**
 * main - outputs numbers from 1 to 100 and if number is multiple 0f 3:Fizz
 * multiple of 5: Buzz
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3) == 0 && (i % 5) == 0)
	{
		printf("FizzBuzz");
	}
	else if ((i % 3) == 0)
	{
		printf("Fizz");
	}
	else if ((i % 5) == 0)
	{
		printf("Buzz");
	}
	else
		printf("%d", i);
	if (i != 100)
		printf(" ");
	}
	printf("\n");

	return (0);
}
