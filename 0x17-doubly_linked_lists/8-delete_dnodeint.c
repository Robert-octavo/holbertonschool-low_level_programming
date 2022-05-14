#include "lists.h"
/**
 * delete_dnodeint_at_index - Write a function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: head of the linked list.
 * @index: Index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
/*check if the head is NULL*/
	if (*head == NULL)
		return (-1);

/*Go to the index position with tmp*/
	while (index != 1)
	{
		tmp = tmp->next;
/*Check if tmp is NULL*/
		if (tmp == NULL)
			return (-1);
		index--;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		(tmp->prev)->next = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
