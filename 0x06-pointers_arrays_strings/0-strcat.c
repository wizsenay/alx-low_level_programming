#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: given input
 * @src: given input
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (a);
}
