#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	size_t i;
	char *c, *brc = "";

	i = 0;
	va_start(ptr, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", brc, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%i", brc, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", brc, va_arg(ptr, double));
				break;
			case 's':
				{
				c = va_arg(ptr, char *);
				if (c == NULL)
					printf("%s(nil)", brc);
				if (c != NULL)
					printf("%s%s", brc, c);
				}
				break;
		}
		brc = ", ";
		i++;
	}
	printf("\n");
	va_end(ptr);
}
