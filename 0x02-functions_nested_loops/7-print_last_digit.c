#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: 0
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -1 * (n % 10);
	else
		n = r % 10;
	_putchar((n % 10) + '0');

	return (n % 10);
}

