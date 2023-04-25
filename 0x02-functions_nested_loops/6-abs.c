#include "main.h"
/**
 * _abs - Entry point
 *
 *
 * @i: it is an integer
 * Return: Always 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
