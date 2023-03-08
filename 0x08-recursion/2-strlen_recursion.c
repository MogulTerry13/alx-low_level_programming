#include "main.h"

/**
 * _strlen_recursion - return str length
 * @s: input
 * Return: length of str
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
