#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: input number of line
 */

void print_line(int n)
{
	int e;

	e = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (e < n)
		{
			_putchar('_');
			e++;
		}
		_putchar('\n');
	}
}
