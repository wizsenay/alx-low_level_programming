#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: input string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *c;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ptr, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i == (n - 1))
			printf("\n");
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ptr);
}
