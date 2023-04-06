#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int int_value = 0;

	if (!b)
		return (0);

	/*loop statement to convert*/
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		int_value = 2 * int_value + (b[m] - '0');
	}

	return (int_value);
}
