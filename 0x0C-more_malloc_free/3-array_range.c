#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: input number
 * @max: the second input number
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int sub, i = 0;

	sub = (max - min) + 1;
	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * sub);
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
