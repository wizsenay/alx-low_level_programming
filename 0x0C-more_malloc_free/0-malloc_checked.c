#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: input memory value
 * Return: null if it fails
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
