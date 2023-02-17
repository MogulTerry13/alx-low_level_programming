#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0 + 1; j < 9; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');

			if (i < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
