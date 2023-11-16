#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the pointer point to the first linkdin element
 * Return: the number of nodes
 */

size_t print_list(list_t *h)
{
	list_t *newNod, *temp;
	size_t i = 0;

	newNod = h;
	while (newNod->next != NULL)
	{
		if (newNod->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", newNod->len, newNod->str);
		temp = newNod->next;
		newNod = temp;
		i++;
	}
	if (newNod->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", newNod->len, newNod->str);

	return (i + 1);
}
