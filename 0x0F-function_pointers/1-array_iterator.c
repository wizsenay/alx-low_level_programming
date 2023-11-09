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

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
