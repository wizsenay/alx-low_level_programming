#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer used to pass some string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
