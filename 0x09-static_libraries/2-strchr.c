#include "main.h"

/**
 * _strchr - main function
 * @s: firstvariable
 * @c: second variable
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
