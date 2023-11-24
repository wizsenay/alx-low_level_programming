#include "main.h"
/**
 * set_bit - change a give indexe 0 to 1
 * @n: a given number
 * @index: a given index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mas;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mas = 1;
	mas = mas << index;
	*n = ((*n) | mas);
	return (1);
}
