#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: head of the linked list.
 * @n: Integer to store in the list.
 * Return: address of the head.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	last = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
/*First Element*/
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
/*Loop the list till end*/
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
