#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x the power of y
 * @x: the bese of the give equation
 * @y: the power of the given equation
 * Return: the output or the solution of the equation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);
	return (x);
}
