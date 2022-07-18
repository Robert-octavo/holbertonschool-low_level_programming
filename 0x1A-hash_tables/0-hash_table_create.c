#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table.
 * @size:  is the size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_t->array[i] = NULL;
	}
	return (hash_t);
}
