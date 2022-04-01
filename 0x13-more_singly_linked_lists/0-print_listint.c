#include "lists.h"
/**
 * print_listint - Function that prints all the elements of
 * a listint_t list.
 * @h: singly linked list.
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0; /*Cantidad de nodes*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
