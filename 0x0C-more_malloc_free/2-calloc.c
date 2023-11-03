#include "main.h"
/**
 * _calloc -  allocates memory for an array,
 * @nmemb: input number of memory block
 * @size:input size of each menory block
 * Return: a pointer point to rhe first memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal, *con;
	unsigned int coun;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	for (coun = 1; coun < nmemb; coun++)
	{
		cal = malloc(size);
		if (cal == NULL)
			return (NULL);
		return (cal);
		free(cal);
	}
	con = malloc(size);
	return (con);
}
