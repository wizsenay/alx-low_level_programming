#include "main.h"
/**
 * print_rev - prints a string
 * @s: input value
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	while (a)
		_putchar(s[--a]);
	_putchar('\n');
}
