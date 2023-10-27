#include "main.h"

/**
 * _memcpy - main funtion
 * @dest: first input
 * @src: second input
 * @n: 3rd input
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
