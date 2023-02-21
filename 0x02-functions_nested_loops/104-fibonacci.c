#include <stdio.h>

/**
 * main - fibonacci
 * purpose - no hardcode
 * Return: 0 (Success)
 */

int main(void)
{
	long prev = 1, curr = 2, count = 0;

	printf("%ld, %ld", prev, curr);
	count += 2;
	while (count < 98)
	{
		long next = prev + curr;

		printf(", %ld", next);
		count++;
		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
