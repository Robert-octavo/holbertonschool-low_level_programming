#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: head of the linked list.
 * @n: integer to store in the list.
 * Return: address of the head or Null if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));/*Reserve Memory*/
	if (new == NULL)/*Check if the Memory were allocated*/
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
