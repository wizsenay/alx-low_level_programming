#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end a given nodes
 * @head: a pointer point to the head pointer
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

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
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (*head);
}
