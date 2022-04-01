#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: singly linked list
 * Return: number of nodes in the linked list
 */
size_t listint_len(const list_t *h)
{
	size_t i = 0; /*counts the nodes on the list*/

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
