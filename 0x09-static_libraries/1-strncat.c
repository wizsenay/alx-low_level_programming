#include "main.h"

/**
 * _strncat - main function
 * @dest: first input
 * @src: 2nd input
 * @n: the number of bytes
 * Return: destination function
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i++])
	j++;
for (i = 0; src[i] && i < n; i++)
	dest[j++] = src[i];
return (dest);
}
