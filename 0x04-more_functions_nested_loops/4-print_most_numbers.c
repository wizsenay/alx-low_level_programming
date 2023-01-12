#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 exepr 2 and 4.
 */

void print_most_numbers(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		if (s != '2' && s != '4')
		{
			_putchar(s);
		}
	}
	_putchar('\n');
}
