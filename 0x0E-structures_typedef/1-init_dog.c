#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: input pointer
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
