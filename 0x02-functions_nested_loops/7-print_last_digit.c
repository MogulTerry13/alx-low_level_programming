#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract last digit from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
