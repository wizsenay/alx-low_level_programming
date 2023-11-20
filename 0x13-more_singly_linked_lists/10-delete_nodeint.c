#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a given node
 * @index: the index of the node that should be deleted
 * @head: a head pointer
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cop, *temp, *new, *fre;
	unsigned int i, j = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	while (new != NULL)
	{
		new = new->next;
		j++;
	}
	if (j < index)
		return (-1);
	if (index == 0)
	{
		fre = *head;
		*head = fre->next;
		free(fre);
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1); i++)
		temp = temp->next;
	cop = temp->next;
	temp->next = cop->next;
	free(cop);
	return (1);
}
