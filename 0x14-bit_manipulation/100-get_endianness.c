#include "main.h"
/**
 * get_endianness - checks order storage of bytes of a word in memory
 * Big-endian:Stores the Most Significant Byte (MSB) of the data word in \
 the smallest address in memory.
 * Little-endian:Stores the Least Significant Byte (LSB) of the data word in \
 the smallest address in memory.
 * Return: 1 if little ednian and 0 if big endian
 */
int get_endianness(void)
{
	int y = 1;

	if (*((char *)&y) == 1)
		return (1);
	else
		return (0);
}
