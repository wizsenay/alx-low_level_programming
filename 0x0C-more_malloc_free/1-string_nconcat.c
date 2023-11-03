#include "main.h"
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
	unsigned int i, j, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;
	j = k + l;
	if (n < k)
	{
		conc = malloc(sizeof(char) * (k + n) + 1);
		if (conc == NULL)
			exit(0);
		for (i = 0; i < (k + n); i++)
		{
			if (i < k)
				conc[i] = s1[i];
			else
				conc[i] = s2[i - k];
		}
	}
	if (n >= k)
	{
		conc = malloc(sizeof(char) * j + 1);
		if (conc == NULL)
			exit(0);
		for (i = 0; i < j; i++)
		{
			if (i < k)
				conc[i] = s1[i];
			else
				conc[i] = s2[i - k];
		}
	}
	return (conc);
}
