#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the pointer point to thepointer to first node
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNod, *temp;
	int i;

	newNod = malloc(sizeof(list_t));
	if (newNod == NULL)
		return (NULL);
	newNod->str = strdup(str);
	while (newNod->str[i])
		i++;
	newNod->len = i;
	newNod->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		temp = newNod;
		*head = newNod;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNod;
	}
	return (*head);
}
