#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *new_node;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(new_node) * size);
	if (new_table->array == NULL)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_table->array[0] = new_node;
	new_node->key = NULL;
	new_node->value = NULL;
	new_node->next = NULL;

	return (new_table);	
}