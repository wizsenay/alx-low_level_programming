#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - allocate a memory
 * @name: input name
 * @age: input age
 * @owner: the namw of the owner
 * Return: the addres of the dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poi;
	int i, j;

	poi = malloc(sizeof(dog_t));
	if (poi == NULL)
		return (NULL);
	for (i = 0; name[i] <= '\0'; i++)
		poi->name[i] = name[i];
	for (j = 0; owner[j] <= '\0'; j++)
		poi->owner[j] = owner[j];
	poi->age = age;
	return (poi);
}
