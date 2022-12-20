#include "main.h"
/**
 * puts2 - print every character of a string
 * @str: int value
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
		a++;
	a -= 1;

	for (; b <= a; b += 2)
		_putchar(str[b]);
	_putchar('\n');
}

