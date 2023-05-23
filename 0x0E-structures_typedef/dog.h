#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - The structure of a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - the typedef of the dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
