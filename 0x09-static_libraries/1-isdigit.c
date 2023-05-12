#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check the code
 * @c: This is an ASCII character
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
