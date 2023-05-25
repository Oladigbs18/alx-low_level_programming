#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: pointer to name
 * @f: the function the pointer points to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}