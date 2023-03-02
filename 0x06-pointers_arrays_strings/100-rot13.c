#include "main.h"
/**
 * rot13 - changes character by replacing it with the next 13th character
 * @s: string to be changed
 *Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char replaced[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == alphabet[j])
		{
			s[i] = replaced[j];
			break;
		}
		}
	}
	return (s);
}
