#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int r, c, product, digits;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				product = r * c;
				if (c == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					digits = 0;
					if (product >= 10)
						digits++;
					if (product >= 100)
						digits++;
					_putchar(',');

					while (digits < 3)
					{
						_putchar(' ');
						digits++;
					}
					if (product >= 10)
						_putchar((product / 10) + '0');
					else
						_putchar(' ');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
