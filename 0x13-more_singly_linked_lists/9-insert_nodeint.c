#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: head of the linked list.
 * @idx: index where the new node should be added.
 * @n: the data of the new node
 * Return: Null if it fails - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *copia = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));/*Reserve Memory*/
	if (new == NULL)/*Check if the Memory were allocated*/
		return (NULL);

	new->n = n;

	if (idx == 0)/*if the index it's 0*/
	{
		new->next = copia;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copia == NULL || copia->next == NULL)
			return (NULL);
		copia = copia->next;
	}
	new->next = copia->next;
	copia->next = new:
	
	return (new);
}
