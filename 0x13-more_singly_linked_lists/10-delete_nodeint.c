#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list
 * @head: pointer to the head of the linked list.
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *copia = *head;
	unsigned int i;

	if (copia == NULL)
			return (-1);
	if (index == 0)
	{
		/*(*head) notacion por ser doble puntero*/
		*head = (*head)->next;
		free(copia);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copia->next == NULL)
			return (-1);
		copia = copia->next;
	}
	new = copia->next;
	copia->next = new->next;
	return (1);
}
