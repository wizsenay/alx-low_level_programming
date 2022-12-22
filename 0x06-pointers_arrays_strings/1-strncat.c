#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;
	char *c = dest, *d = src;

	while (*src)
	{
		a++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > a)
		n = a;

	src = d;

	for (; b < n; b++)
		*dest++ = *src++;

	*dest = '\0';
	return (c);
}
