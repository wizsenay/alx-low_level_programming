#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the beginning of a given node
 * @head: a pointer point to the head pointer
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
