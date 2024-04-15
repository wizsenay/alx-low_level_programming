#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - create a new hash tabe wtih a size of @size
 * @size: the size of the table
 * Return: pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table;

	if (size == 0)
		return (NULL);
	create_table = calloc(1, sizeof(hash_table_t));
	if (create_table == NULL)
		return (NULL);

	create_table->size = size;
	create_table->array = calloc(size, sizeof(hash_node_t *));
	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}
	return (create_table);
}
