#include "main.h"
/**
 * binary_print - conver decimal to binery
 * @n: given decimal number
 */
void binary_print(unsigned long int n);
void binary_print(unsigned long int n)
{
	if (n == 0)
		return;
	binary_print(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - display the out put
 * @n: a given decimal
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary_print(n);
}
