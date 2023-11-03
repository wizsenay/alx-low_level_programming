#include "main.h"
/**
 * _calloc -  allocates memory for an array,
 * @nmemb: input number of memory block
 * @size:input size of each menory block
 * Return: a pointer point to rhe first memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	while (i < (nmemd * size))
	{
		cal[i] = 0;
		i++;
	}
	return (cal);
}
