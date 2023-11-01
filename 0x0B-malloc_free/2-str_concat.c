#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first input string
 * @s2: the second input string
 * Return: a pointer (that point to 2 concates two string in one)
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	con = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (con == NULL)
		return (0);
	for (i = 0; i < (strlen(s1) + strlen(s2)); i++)
	{
		if (i < strlen(s1))
			con[i] = s1[i];
		else
			con[i] = s2[i - strlen(s1)];
	}
	return (con);
}
