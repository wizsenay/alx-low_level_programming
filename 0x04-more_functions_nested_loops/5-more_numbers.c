#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int s, e;

	for (s = 0; s <= 9; s++)
	{
		for (e = 0; e <= 14; e++)
		{
			if (e > 9)
				_putchar(e / 10 + '0');

			_putchar(e % 10 + '0');
		}
		_putchar('\n');
	}
}
