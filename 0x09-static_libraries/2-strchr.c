#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Check the code for Aaliyah
 * @s: the string
 * @c: the character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
