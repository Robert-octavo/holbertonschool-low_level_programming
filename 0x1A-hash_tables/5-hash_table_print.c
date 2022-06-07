#include "hash_tables.h"
/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht:   is the hash table
 * Return: Nothing
 * You should print the key/value in the order that they appear
 * in the array of hash table
 * Order: array, list
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s',", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		i++;
	}

	printf("}\n");
}
