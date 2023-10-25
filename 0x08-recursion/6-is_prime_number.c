# include "main.h"

/**
 * is_prime_number - a function, returns 1 if the input integer is a prime num.
 *
 * @n: input number
 * Return: identify prime numbers
 */

int is_prime_number(int n)
{
	int num;

	num = 2;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (num < n)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}
