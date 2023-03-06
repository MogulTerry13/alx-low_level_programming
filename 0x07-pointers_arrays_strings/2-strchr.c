#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c:input
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c != '\0')
	{
		return (s);
	}
	return (0);
}
