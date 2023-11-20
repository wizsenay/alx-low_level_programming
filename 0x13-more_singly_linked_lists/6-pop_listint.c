#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: the head pointer
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	i = temp->n;
	temp->next = NULL;
	free(temp);
	return (i);
}
