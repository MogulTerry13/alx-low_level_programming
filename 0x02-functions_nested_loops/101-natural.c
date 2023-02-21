#include <stdio.h>

/**
 * main - list natural numbers that are multiples of 3 or 5
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
