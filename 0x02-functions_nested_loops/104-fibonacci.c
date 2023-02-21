#include <stdio.h>

/**
 * main - fibonacci
 * purpose - no hardcode
 * Return: 0 (Success)
 */

int main(void)
{
	long long prev = 1, curr = 2, count = 0;

	printf("%lld, %lld", prev, curr);
	count += 2;
	while (count < 98)
	{
		long long next = prev + curr;

		printf(", %lld", next);
		count++;
		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
