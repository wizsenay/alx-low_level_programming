#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a give nodes
 * @head: pointer point to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
