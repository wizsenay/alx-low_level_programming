#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1:the first input string
 * @s2:the second input string
 * @n: input numbers that tell how meny caracter should print form  s2
 * Return: a pointer point to the concatenates strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, j;

	j = strlen(s1) + strlen(s2);
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	if (n < strlen(s2))
	{
		conc = malloc(sizeof(char) * (strlen(s1) + n) + 1);
		if (conc == NULL)
			exit(0);
		for(i = 0; i < (strlen(s1) + n); i++)
		{
			if (i < strlen(s1))
				conc[i] = s1[i];
			else
				conc[i] = s2[i - strlen(s1)];
		}
	}
	if (n >= strlen(s2))
	{
		conc = malloc(sizeof(char) * j + 1);
		if (conc == NULL)
			exit(0);
		for(i = 0; i < j; i++)
		{
			if (i < strlen(s1))
				conc[i] = s1[i];
			else
				conc[i] = s2[i - strlen(s1)];
		}
	}
	return (conc);
}
