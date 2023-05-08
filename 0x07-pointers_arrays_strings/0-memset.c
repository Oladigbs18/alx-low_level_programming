#include "main.h"
#include <stdio.h>

/**
 * *_memset - the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the memory area pointed to
 * @b: the byte constant
 * @n: number of bytes
 *
 * Return: s (memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
