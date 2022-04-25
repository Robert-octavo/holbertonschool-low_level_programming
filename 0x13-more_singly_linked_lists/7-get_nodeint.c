#include "lists.h"
/**
 * get_nodeint_at_index - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: head of the linked list.
 * @index: integer to store in the list.
 * Return: address of the head or Null if it failed.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
