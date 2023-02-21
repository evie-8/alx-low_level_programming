/**
 * print_alphabet - print all letters in lower case
 */
void print_alphabet(void)
{
	int _putchar(char c);
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
