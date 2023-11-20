#include "lists.h"
/**
 * sum_listint - sum of all the data of a give node
 * @head: the head pointer
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
