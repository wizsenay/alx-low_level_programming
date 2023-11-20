#include "lists.h"
/**
 * print_listint - prints the data of a given node
 * @h: a head pointer to the node or pointer point to the first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (i);
	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
