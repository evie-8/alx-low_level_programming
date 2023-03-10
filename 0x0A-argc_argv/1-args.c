#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments entered in command line
 * @argv: stores arguments passed
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
