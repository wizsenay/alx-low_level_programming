#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the amout of memory
 * Return: a pointer allocates some memory places
 */

void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(sizeof(unsigned int) * b);
	if (mal == NULL)
		exit(98);
	return (mal);
}
