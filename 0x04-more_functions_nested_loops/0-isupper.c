#include <stdio.h>
#include "main.h"
/**
 * _isupper - Check the code
 *
 * @c: This is a character in ASCII code
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}