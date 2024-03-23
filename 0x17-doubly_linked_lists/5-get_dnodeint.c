#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head pointer of the node
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 *		if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
