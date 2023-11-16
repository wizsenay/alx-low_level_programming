#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: the pointer point to the first linkdin element
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *newNod, *temp;
	size_t i = 0;

	newNod = h;
	while (newNod->next != NULL)
	{
		temp = newNod->next;
		newNod = temp;
		i++;
	}
	return (i + 1);
}
