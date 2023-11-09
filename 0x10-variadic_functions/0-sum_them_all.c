#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add the input numbers
 * @n: it tells how many numbers are pass to add
 * Return: the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pot;
	unsigned int sum, i;

	if (n == 0)
		return (0);
	va_start(pot, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pot, int);
	return (sum);
}
