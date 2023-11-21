#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lts, *cop, *temp;

	if (*head == NULL || head == NULL)
		return (NULL);
	lts = *head;
	while (lts->next != NULL)
		lts = lts->next;
	while ((*head)->next != NULL)
	{
		temp = *head;
		cop = *head;
		while (temp->next != NULL)
			temp = temp->next;
		while ((cop->next)->next != NULL)
			cop = cop->next;
		temp->next = cop;
		cop->next = NULL;
	}
	*head = lts;
	return (*head);
}
