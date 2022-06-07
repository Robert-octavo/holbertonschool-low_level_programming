#include "hash_tables.h"
/**
 * hash_table_get - Write a function that retrieves a value associated
 * with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *tem; /*define a node*/

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
/*return the index*/
	index = key_index((const unsigned char *)key, ht->size);
/*check if the index is greatter than the size in the hask table*/
	if (index >= ht->size)
		return (NULL);

	return (0);
}
