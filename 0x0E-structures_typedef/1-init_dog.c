#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @d: the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (0);
}
