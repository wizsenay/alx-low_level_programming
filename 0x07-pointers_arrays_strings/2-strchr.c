#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: input character
 * @c: given character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
