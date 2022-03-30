#include "lists.h"
/**
 * list_len - function that finds the number of nodes
 * in the list
 * @h: singly linked list
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
