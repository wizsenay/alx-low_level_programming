#include "main.h"
/**
 * puts_half - print half of string
 * @str: int value
 */

void puts_half(char *str)
{
	int a = 0;
	int b, c;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 0)
		c = a / 2;
	else
		c = (a + 1) / 2;
	for (b = c; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
