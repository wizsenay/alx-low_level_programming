#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to the head pointer
 * @idx: the index of the list where the new node should be added.
 * Retrun: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	if (head == NULL)
		return (newNode);
	while (i < idx)
	{
		(*head)->next = ((*head)->next)->next;
		i++;
	}
	newNode = ((*head)->next)->next;
	(*head)->next= newNode;
	return (*head);
}
