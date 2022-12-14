#include "main.h"
/**
 * times_table -  prints the 9 times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 9; b++)

			c = a * b;

			if (c <= 9)
				_putchar(',');
				_putchar(' ');
			else
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
