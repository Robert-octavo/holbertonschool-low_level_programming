#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the head.
 * Return: number of elements
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
