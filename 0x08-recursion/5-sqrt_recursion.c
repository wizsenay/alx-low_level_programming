#include "main.h"
/**
 * _sqrt_recursion - the value of square root
 * @n: input integer
 * Return: the square root
 */
int  _sqrt_recursion(int n)
{
	if (n < 0)
		return  (-1);
	return (root(1, n));
}
/**
 * root - find the out pur value
 * @a: square value
 * @b: squared value
 * Return: square root
 */
int root(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
	return (a);
	return (root(a + 1, b));
}
