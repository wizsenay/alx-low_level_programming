#include "main.h"
#include <stdio.h>
/**
 * clear_bit - the value of a bit to 0 at a given index.
 * @n: a given number
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mas;

	mas = 1;
	mas = mas << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mas ^ *n;
	return (1);
}
