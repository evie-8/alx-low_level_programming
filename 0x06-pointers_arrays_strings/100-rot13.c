#include "main.h"
/**
 * rot13 - changes character by replacing it with the next 13th character
 * @s: string to be changed
 *Return: encoded string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a'  && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] = s[i] - 13;
	}
	return (s);
}
