#include "dog.h"
#include <stdio.h>

/**
 * free_dog - a function that frees dog
 * @d: The pointer to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
