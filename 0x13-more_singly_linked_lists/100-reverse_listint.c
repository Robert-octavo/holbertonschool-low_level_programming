#include "lists.h"
/**
 * reverse_listint - function that reverses a list
 * @head: pointer to a pointer.
 * Return: Pointer to the first node of a list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;
	while(*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;	
	return (*head);
}
