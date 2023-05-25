#include "function_pointer.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: the array of numbers
 * @size: the number of elements in the array
 * @cmp: the function that returns a value
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
