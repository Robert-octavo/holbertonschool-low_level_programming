#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * and returns the head node's data (n);
 * @head: pointer to head of the linked list.
 * Return: the head node's data or 0 if it's NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (*head == NULL)
		return (0);

	new = *head;
	*head = (*head)->next;

	return (data = (*head)->n);
}
