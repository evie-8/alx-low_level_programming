#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments passed to command line
 * @argv: array of string that stores arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
