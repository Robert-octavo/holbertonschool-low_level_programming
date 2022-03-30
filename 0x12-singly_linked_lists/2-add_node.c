#include "lists.h"
#include <stdio.h>
/**
 * add_node - function that adds a node
 * @head: pointer to linkend list
 * @str: new string
 * Return: the address of the new element
 */
list_t *add_node(list_ **head, const char *str)
{
	list_t *nueva;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);
	nueva = malloc(sizeof(list_t));
	if (nueva == NULL)
		return (NULL);
	nueva->str = strup(str);/*duplica la cadena*/
	nueva->len = strlen(str);/*Largo de la cadena*/

	if (head == NULL)
		nueva->next = NULL;
	else
		nueva->next = *head;

	*head = nueva;
	return (nueva);
}
