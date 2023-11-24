#include "main.h"
#include <stdio.h>
/**
 * get_bit- check the value of a bit at a given index.
 * @n: an input number
 * @index: input index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
