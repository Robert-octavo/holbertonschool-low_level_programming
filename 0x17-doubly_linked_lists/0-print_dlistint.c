#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubel 
 * linked list.
 * @h: pointer to the head.
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->n == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
