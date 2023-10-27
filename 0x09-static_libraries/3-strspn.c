#include "main.h"

/**
 * _strspn - main function
 * @s: first variable
 * @accept: second variable
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return (j);
}
