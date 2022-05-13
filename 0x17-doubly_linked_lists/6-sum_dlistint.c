#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the head.
 * Return: if the list is empty, return 0 or Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

return (result);
}
