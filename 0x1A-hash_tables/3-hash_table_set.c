#include "hash_tables.h"
/**
 * check_key - checks if a key exists in a hash table
 * @ht: pointer to the hash_node_t list
 * @key: key to look for
 *
 * Return: 1 if the key is found, 0 otherwise
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * new_node - adds a new node at the beginning
 * @head: double pointer to the hash_node_t list
 * @key: new key to add
 * @value: value to add
 *
 * Return: the address of the new element
 */
hash_node_t *new_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}


/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: Write a function that adds an element to the hash table
 * @value:  is the value associated with the key.
 * @key: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (check_key(ht->array[index], key))
	{
		while (temp && strcmp(temp->key, key))
			temp = temp->next;

		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	new_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);

	return (1);
}
