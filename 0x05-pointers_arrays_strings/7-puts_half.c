#include "main.h"

/**
 * puts_half - prints half a str
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, n, length;

	length = 0;
	for (a = 0; str[a] != '\0'; a++)
		length++;
	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}