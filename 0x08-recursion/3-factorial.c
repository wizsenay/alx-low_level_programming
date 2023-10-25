#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: input number from the user
 * Return: the out put of the given number
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (1);
	if (n > 1)
		fac = n * factorial(n - 1);

	return (fac);
}
