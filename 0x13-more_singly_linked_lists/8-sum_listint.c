#include "lists.h"
/**
 * sum_listint - function that deletes the head
 * node of a listint_t
 * and returns the head node's data (n);
 * @head: head of the linked list.
 * Return: the sum of all data or 0 if it's NULL
 */

int sum_listint(listint_t *head)
{
	int sumdata = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sumdata = sumdata + head->n;
		head = head->next;
	}

	return (sumdata);
}
