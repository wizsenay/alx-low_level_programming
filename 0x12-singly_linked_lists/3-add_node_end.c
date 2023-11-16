#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a noe node to the end of a list_t list.
 * @head - a pointer to the first nod pointer
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNod;
	size_t i = 0;

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
		temp = newNod;
	else
	{
		while (temp->next != NULL)
			 temp = temp->next;
		temp->next = newNod;
	}
	return(*head);
}
