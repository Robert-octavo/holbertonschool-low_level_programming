#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: head of the linked list.
 * @idx: Index
 * @n: Integer to store in the list.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
/*add at the beginning idx = 0*/
	if (idx == 0)
		return (add_dnodeint(h, n));
/*Go to the index position with tmp*/
	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
/*Check if tmp is the las one*/
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

/*if is diferent from the beginnig or last */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	(tmp->next)->prev = new;
	tmp->next = new;

	return (new);
}
