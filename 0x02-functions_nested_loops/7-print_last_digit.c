#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: 0
 */
int print_last_digit(int n)
{
	int s = n % 10;

	if (s < 0)
		s *= -1;
	_putchar(s);
	_putchar(s);

	return (0);
}

