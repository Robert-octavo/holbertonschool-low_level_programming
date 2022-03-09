#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a
* newly allocated spaced in memory, which contains
* a copy of the string given as a parameter
* @str: pointer to a char
* Return: a pointer or Null
*/
char *_strdup(char *str)
{
	char *ptr;
	int Lenght = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[lenght] != '\0')
		lenght++;

	ptr = malloc(sizeof(*str) * lenght + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
