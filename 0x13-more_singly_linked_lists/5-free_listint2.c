#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the head of the linked list.
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *c;

	while (*head != NULL)
	{
		c = (*head)->next;
		free(*head);
		*head = c;
	}
}
