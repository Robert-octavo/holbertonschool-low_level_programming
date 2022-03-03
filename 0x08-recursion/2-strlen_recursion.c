#include "main.h"

/**
* _strlen_recursion - function that returns the
* length of a string
* @s: pointer to a char
*
* Return: integer
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!s || !*s)
		return (0);

	i = 1 + _strlen_recursion(s + 1);

	return (i);
}
