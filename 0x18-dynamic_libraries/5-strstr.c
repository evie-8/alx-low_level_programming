#include "main.h"
/**
 * _strstr - finds substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: first occurence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;


	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
			if (!needle[j])
			{
				return (&haystack[i]);
			}
	}
	return (0);
}
