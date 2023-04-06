#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, value = 0;
	unsigned long int present;
	unsigned long int excl = n ^ m;

	for (q = 63; q >= 0; q--)
	{
		present = excl >> q;
		if (present & 1)
			value++;
	}

	return (value);
}
