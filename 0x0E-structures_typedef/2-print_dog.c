#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: input pointer
 * Description - the input pointer, point to the given stract
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		exit(0);
	}
	if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: nil\nAge: %f\nOwner: nil\n", d->age);
		exit(0);
	}
	if (d->name == NULL)
	{
		printf("Name: nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
		exit(0);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: nil\n", d->name, d->age);
		exit(0);
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
