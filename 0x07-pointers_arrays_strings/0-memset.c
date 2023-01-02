#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: location of files
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *memSet = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (memSet);
}
