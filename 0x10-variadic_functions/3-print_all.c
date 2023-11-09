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
	char *c;

	i = 0;
	va_start(ptr, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				{
				c = va_arg(ptr, char *);
				if (c != NULL)
					printf("%s", c);
				if (c == NULL)
					printf("(nil)");
				}
				break;
		}
		if ((i != (strlen(format) - 1)) &&
			(format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
