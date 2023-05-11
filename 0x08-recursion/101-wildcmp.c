#include "main.h"
#include <stdio.h>

/**
 * wildcmp - to print a function that compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 (if the string can be considered
 * identical, otherwise 0)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
