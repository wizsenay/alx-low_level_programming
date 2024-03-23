#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a head pointer to the given node
 * @idx: the index of the list where the new node should be added(start from 0)
 * @n: the new element that insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	temp = *h;
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (temp == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp;
	new->prev = temp->prev;
	(temp->prev)->next = new;
	temp->prev = new;

	return (new);
}
