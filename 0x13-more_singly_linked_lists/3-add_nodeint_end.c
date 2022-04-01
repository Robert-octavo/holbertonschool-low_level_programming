#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: head of the linked list.
 * @n: integer to store in the list.
 * Return: address of the head or Null if it failed.
 */

listint_t *add_nodeint_end(list_t **head, const int n)
{
	list_t *new;
	new = malloc(sizeof(list_t));/*Reserve Memory*/
	if (new == NULL)/*Check if the Memory were allocated*/
		return (NULL);

	new->n = n;
	while (head != NULL)
	new->next = *head;
	*head = new;

	return (*head);
}
