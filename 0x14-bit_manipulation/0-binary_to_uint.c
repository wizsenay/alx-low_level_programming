#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	int r = 1, sum = 0;

	if (b == NULL)
		return (0);
	while (b[j])
		j++;
	j = j - 1;
	while (j >= 0)
	{
		if (b[j] == '1')
		{
			sum += r;
			r *= 2;
		}
		if (b[j] == '0')
			r *= 2;
		if (b[j] != '1' && b[j] != '0')
			return (0);
		j--;
	}
	return (sum);
}
