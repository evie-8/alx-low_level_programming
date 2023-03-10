#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: numbr of arguments
 * @argv: sotres arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num, i, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
