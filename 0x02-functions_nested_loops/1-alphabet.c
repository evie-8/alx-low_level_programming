/**
 * print_alphabet - print all letters in lower case
 * _putchar - output a character
 * @c: parameter to which argument in passed
 *Return: depending on the return of the actual function
 */
int _putchar(char c);
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
