#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function used to free a dynamicly allocated memory
 * @d: input pointer
 */

void free_dog(dog_t *d)
{
	free(d);
}
