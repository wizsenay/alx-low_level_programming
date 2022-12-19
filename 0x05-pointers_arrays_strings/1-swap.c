#include "main.h"
/**
 * swap_int - swap the value of two intgers
 * @a: pointer variable
 * @b: pointer variable
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
