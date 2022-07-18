#include "hash_tables.h"
/**
 * key_index - Write a function that gives you the index of a key.
 * @size:  is the size of the array
 * @key: is the key
 * Return: the index at which the key/value pair should be stored in
 * the array of the hash table
 * You will have to use this hash function for all the next tasks
 * This function should use the hash_djb2 function that you wrote earlier
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
