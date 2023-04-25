#include "main.h"
/**
 * _islower - 'to show 1 if letter is in lowercase'
 *
 * @c: The character is in ASCII code
 * Return: 1 for lowercase, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
