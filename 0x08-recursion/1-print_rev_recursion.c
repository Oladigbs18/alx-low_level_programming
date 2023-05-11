#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - to print a string in reverse
 * @s: The string character
 * 
 * Return: empty
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
