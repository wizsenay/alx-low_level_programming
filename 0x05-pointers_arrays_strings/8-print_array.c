#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elments
 * @a: user given
 * @n: input integers
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
