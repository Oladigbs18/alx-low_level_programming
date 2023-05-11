#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - to return the value of x
 * raised to the power of y
 * @x: The given number
 * @y: The power the number is raised to
 *
 * Return: -1 (if y is lower than 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (_pow_recursion(x, y - 1) * x);
}
