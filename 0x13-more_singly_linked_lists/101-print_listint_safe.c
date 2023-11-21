#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head pointer to the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(listint_t *head)
{
	listint_t *h, *temp;
	size_t i;

	if (head == NULL)
		exit(98);
	h = reverse_listint(&head);
	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
