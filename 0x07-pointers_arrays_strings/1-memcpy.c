#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where memory is stores
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
