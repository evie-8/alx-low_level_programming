#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments passed to command line
 * @argv: array storing arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			num = atoi(argv[i]);
			if (num > 0)
				sum += num;
			else
			{
				return (0);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
