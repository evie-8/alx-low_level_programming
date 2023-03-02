#include "main.h"
/**
 * cap_string - capitalize first letter of a word
 * @s: string
 * Return: modified string
 */
char *cap_string(char *s)
{
	int i;
	char prev = ' ';

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
		{
			if (i == 0 || prev == ' ' || prev == '\t' || prev == '\n' ||
			prev == ',' || prev == ';' || prev == '.' ||
			prev == '!' || prev == '?' || prev == '"' ||
			prev == '(' || prev == ')' || prev == '{' || prev == '}')
			{
				s[i] -= 32;
			}
		}
		prev = s[i];
	}
	return (s);
}
