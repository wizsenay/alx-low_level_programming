#include "main.h"

/**
 * _strlen - Main function
 * @s: Input string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s +  count) != '\0')
		count++;
	return (count);
}
