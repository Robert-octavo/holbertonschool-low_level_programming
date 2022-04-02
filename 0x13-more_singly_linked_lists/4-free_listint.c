#include "lists.h"

/**
 * free_listint- frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
		C = head->next;
		free(head);
		head = c;
	}
}
