#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - to print a string followed by a new line
 * @s: The character is a string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
