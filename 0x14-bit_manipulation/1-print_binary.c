#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int p, num = 0;
	unsigned long int value;

	for (p = 63; p >= 0; p--)
	{
		value = n >> p;

		if (value & 1)
		{
			num++;
			_putchar('1');
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
