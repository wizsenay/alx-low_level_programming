#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bits you would need to flip to get
 *		from one number to another.
 * @n: input number
 * @m: input counter
 * Return: the number of bits you would need to flip to get from
 *		one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res, cou;

	res = n ^ m;
	for (cou = 0; res > 0;)
	{
		if ((res & 1) == 1)
			cou++;
		res = res >> 1;
	}
	return (cou);
}
