#include "main.h"

/**
 * create_array - creates an array of char
 * @size: input memory size
 * @c: input char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;


	if (size == 0)
		return (NULL);
	chr = malloc(sizeof(char) * size);

	if (chr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chr[i] = c;
	return (chr);
}
