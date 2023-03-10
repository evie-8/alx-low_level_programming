#include <stdio.h>
#include <stdlib.h>

/**
 * min - smallest of two numbers
 * @a: first number
 * @b: second number
 * Return: smallest number
 */
int min(int a, int b)
{
	int small = a;

	if (b <= a)
		small = b;
	return (small);
}

/**
 * main - minimum change of coins
 * @argc: number of arguments
 * @argv: array of strings containing arguments
 * Return: mininum number of coins required
 */
int main(int argc, char *argv[])
{
	int coins[5] = {1, 2, 5, 10, 25};
	int i, j, num;
	int cents[5][100000];

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
	else
	{
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= num; j++)
		{
			if (j == 0)
				cents[i][j] = 0;
			else if (i == 0)
				cents[i][j] = j;
			if (i > 0)
			{
			if (coins[i] > j)
				cents[i][j] = cents[i - 1][j];
			else
				cents[i][j] = min(cents[i - 1][j], cents[i][j - coins[i]] + 1);
			}
		}
	}
	printf("%d\n", cents[4][num]);
	}
	return (0);
}
