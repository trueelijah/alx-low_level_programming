#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @dog: a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	(*d).name = "Poppy";
	d.age = 3.5;
	(*d).owner = "Bob";

	return (0);
}
