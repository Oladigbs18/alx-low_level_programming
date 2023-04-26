#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @a: it is an integer
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
	_putchar('\n');
}
