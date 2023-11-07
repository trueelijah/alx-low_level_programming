#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @d: the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (0);
}
