#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments passed to command line
 * @argv: array storing arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 3)
	{
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
	}
	else
		printf("Error\n");
	return (1);
}
