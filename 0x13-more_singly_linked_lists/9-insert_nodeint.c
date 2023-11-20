#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head pointer of the node
 * @idx:  the index of the list where the new node should be added.
 * @n: the data of a node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, j = 0;
	listint_t *newNode, *temp, *cheak;

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
	cheak = *head;
	while (cheak != NULL)
	{
		cheak = cheak->next;
		j++;
	}
	if (j < idx)
		return (NULL);
	temp = *head;
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
	return	(*head);
}
