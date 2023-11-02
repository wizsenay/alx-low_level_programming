#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the amount of memory
 * Return: a pointer allocates some memory places
 */

void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
		exit(98);
	return (mal);
}
