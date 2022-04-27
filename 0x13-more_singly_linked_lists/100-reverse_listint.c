#include "lists.h"
/**
 * reverse_listint - function that reverses a list
 * @head: pointer to a pointer.
 * Return: Pointer to the first node of a list
 */

listint_t *reverse_listint(listint_t **head)
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
	free(new);
	return (1);
}
