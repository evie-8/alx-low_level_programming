#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments passed to command line
 * @argv: array storing arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc <= 2)
		printf("Error\n");
	else
	{
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	}
	return (1);
}
