#include "lists.h"
/**
 * dlistint_len - return the number of elements in
 * linked dlistint_t list.
 * @h: pointer to the head.
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
