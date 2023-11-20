#include "lists.h"
/**
 * get_nodeint_at_index - nth node of a give nodes
 * @head: head pinter
 * @index: the index of the node, starting at 0
 * Return: the nth node of a given nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
