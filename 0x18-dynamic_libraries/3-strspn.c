#include "main.h"
/**
 * _strspn - number of bytes of substring in initial string
 * @s: initial string
 * @accept: sub string
 * Return: the bytes in the initial segment of s that contain accept string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (c);
}
