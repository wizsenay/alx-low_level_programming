#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head pointer of the given list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
