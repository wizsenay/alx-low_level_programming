#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: input intigers.
 * @size: number of elements in the given array
 * @cmp: a pointer function
 * Return: the amount of true out puts to the given function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
