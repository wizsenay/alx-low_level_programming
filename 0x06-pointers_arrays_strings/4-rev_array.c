#include "main.h"
/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int b;

	while (c < n--)
	{
		b = a[c];
		a[c++] = a[n];
		a[n] = b;
	}
}
