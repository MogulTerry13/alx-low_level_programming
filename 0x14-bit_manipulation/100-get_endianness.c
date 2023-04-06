#include "main.h"

/**
 * get_endianness - checks endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int big  = 1;
	char *i = (char *) &big;

	return (*i);
}
