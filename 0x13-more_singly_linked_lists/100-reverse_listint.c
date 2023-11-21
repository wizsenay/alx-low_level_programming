#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lts, *cop;

	if (*head == NULL || head == NULL)
		return (NULL);
	lts = *head;
	*head = lts->next;
	lts->next = NULL;

	while (*head != NULL)
	{
		cop = (*head)->next;
		(*head)->next = lts;
		lts = *head;
		if (cop == NULL)
			return (*head);
		*head = cop;
	}
	if (*head == NULL)
	{
		*head = lts;
		return (*head);
	}
	return (NULL);
}
