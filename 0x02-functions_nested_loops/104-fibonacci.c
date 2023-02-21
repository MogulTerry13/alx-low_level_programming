#include <stdio.h>

/**
 * main - fibonacci
 * purpose - no hardcode
 * Return: 0 (Success)
 */

int main(void)
{
	int prev = 1, curr = 2, count = 0;

	printf("%d, %d", prev, curr);
	count += 2;
	while (count < 98)
	{
		int next = prev + curr;

		printf(", %d", next);
		count++;
		prev = curr;
		curr = next;
	}
	printf("\n");
	return (0);
}
