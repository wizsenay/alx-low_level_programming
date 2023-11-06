#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	int i, m, j = 0, l = 0;

	poi = malloc(sizeof(dog_t));
	if (poi == NULL)
		return (NULL);
	poi->age = age;
	while (name[j] < '\0')
		j++;
	while (owner[l] < '\0')
		l++;
	m = j + l;
	for (i = 0; i < m; i++)
	{
		if (i < j)
			poi->name[i] = name[i];
		else
			poi->owner[i] = owner[i - j];
	}
	return (poi);
}
