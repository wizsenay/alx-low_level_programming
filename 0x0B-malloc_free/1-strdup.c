#include "main.h"
#include <string.h>
/**
 * _strduo - returns a pointer to a newly allocated space in memory
 * @str: is input string
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *cop;
	unsigned int i, s;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (i < strlen(str))
		i++;
	cop = malloc(sizeof(char) * (i + 1));

	for (s = 0; s < i; s++)
		cop[s] = str[s];
	return (cop);
}
