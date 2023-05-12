#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds the first occurrence of the substring needle
 * in the string haystack.The terminating null bytes (\0) are not compared.
 * @haystack: lots of strings are together
 * @needle: the substring that is to be found
 *
 * Return: 0 (Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
