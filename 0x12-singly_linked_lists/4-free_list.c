#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: the head pointer to nodes
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
