#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: input pointer
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: reallocated memory pointer
 */

void *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (ptr == NULL)
		return (p);
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			p[i] = ptr[i];
			i++;
		}
		free(ptr);
		return (p);
	}
	if (new_size > old_size)
	{
		while (i < new_size)
		{
			if (i < old_size)
				p[i] = ptr[i];
			else
				p[i] = '0';
			i++;
		}
	}
	free(ptr);
	return (p);
}
