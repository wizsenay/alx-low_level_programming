#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: is a pointer  to the head pointer of the linked list
 * @str: input chara cter that ass to the stract list_t.str string(char *)
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNod;
	unsigned int i = 0;
	char *stdn;

	stdn = strdup(str);
	if(stdn == NULL)
		return (NULL);
	newNod = malloc(sizeof(list_t));
	if (newNod == NULL)
		return (NULL);
	newNod->str = stdn;
	while (newNod->str[i])
		i++;
	newNod->len = i;
	newNod->next = *head;
	*head = newNod;
	return (*head);
}
