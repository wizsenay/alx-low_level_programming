#include "main.h"
/**
 * is_prime_number - chacke integer is a prime number
 * @n: input int
 * Return: int valure
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (divise(n, a));
}
/**
 * divise - check if num is divisible
 * @b: the number to be checked
 * @a: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int divise(int b, int a)
{
	if (b % a == 0)
		return (0);
	if (a == b / 2)
		return (1);
	return (dinise(b, a + 1));
}
