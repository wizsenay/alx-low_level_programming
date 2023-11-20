#include "lists.h"
/**
 * listint_len - count an elements of a node or nomber of nodes
 * @h: head pointer(pointer to the first node)
 * Return: the number of nodes
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *contNod;
	size_t i = 0;

	contNod = h;
	while (contNod != NULL)
	{
		contNod = contNod->next;
		i++;
	}
	return (i);
}
