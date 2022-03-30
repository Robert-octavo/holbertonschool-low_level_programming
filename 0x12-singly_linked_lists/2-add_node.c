#include "lists.h"
/**
 * add_node - function that adds a node
 * @head: pointer to linkend list
 * @str: new string
 * Return: the address of the new element
 */
list_t *add_node(list_ **head, const char *str)
{
	int lenght;
	list_t *nueva;
	char *con;

	if (str == NULL || head == NULL)
		return (NULL);
	for (lenght = 0, str[lenght], lenght++)
		;
	nueva = *head;
	con = malloc((lenght + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		con[i] = str[i];
	nueva = malloc(sizeof(list_t));
	if (nueva == NULL)
	{
		free(con);
		return (NULL);
	}
	nueva->str = con;
	nueva->len = lenght;
	nueva->next = *head;
	*head = nueva;
	return (nueva);
}
