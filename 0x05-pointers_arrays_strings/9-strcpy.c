#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: input variable
 * @src: input charcter
 * Return: poniter
 */

char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src)
		*dest++ = *src++;

	return (str);
}
