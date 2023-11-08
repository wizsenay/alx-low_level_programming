#include "function_pointers.h"
/**
 * array_iterator -print a given array
 * @array: input array
 * @size: the size of input array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
