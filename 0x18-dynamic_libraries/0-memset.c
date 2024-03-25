#include "main.h"

/**
 * _memset - main function
 * @s: input 1
 * @b: input 2
 * @n: input 3
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
