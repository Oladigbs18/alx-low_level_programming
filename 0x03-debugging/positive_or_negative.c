#include "main.h"
/**
 * positive_or_negative - to print a positive or negative number
 *
 * @i: the number is an integer
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
