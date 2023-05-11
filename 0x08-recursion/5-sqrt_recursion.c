#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - to return the square root of
 * a natural number
 * @n: The inputted number
 *
 * Return: -1 (if 'n' doesnt have a natural square root)
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
