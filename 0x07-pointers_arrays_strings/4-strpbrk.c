#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the string of bytes
 * @accept: where the first occurence is
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return (0);
}
