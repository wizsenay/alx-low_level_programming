#include "main.h"
/**
 * _strlen -  length of a string
 * @s: string or character
 * Return: a variale
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
