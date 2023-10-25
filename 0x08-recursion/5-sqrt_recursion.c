#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - a function that return the natural square root of a number
 * @n: input number
 * Return: the squar root of an input number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - the natural square root
 * @n: input number
 * @i: the input multiple]
 * Return: squar root
 */
int _sqrt(int n, int i)
{
	int s;

	s = i * i;

	if (s > n)
		return (-1);
	if (s < n)
		return (_sqrt(n, i + 1));
	return (i);
}
