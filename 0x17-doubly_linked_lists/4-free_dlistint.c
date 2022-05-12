#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @h: pointer to the head.
 * Return: number of elements
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
