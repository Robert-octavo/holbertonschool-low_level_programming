#include "lists.h"
/**
 * add_node - function that adds a node
 * @head: pointer to linkend list
 * @str: new string
 * Return: the address of the new element
 */
list_t *add_node(list_ **head, const char *str)
{
	list_t *nueva;
	size_t i;

	nueva = malloc(sizeof(list_t));
	if (nueva == NULL)
		return (NULL);

	nueva->str = strdup(str);

	i = 0;

	while (str[i])
	{
		i++;
	}
	nueva->len = i;
	nueva->next = *head;
	*head = new;

	return (*head);
}
