#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string that pass from the users
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
