#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - my dog
 * @name: name of my dog
 * @age: age of my dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif