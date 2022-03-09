#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
* @s1: pointer to a char
* @s2: pointer to a char
* Return: a pointer or Null
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int lenghts1 = 0;
	int lenghts2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lenghts1] != '\0')
		lenghts1++;
	while (s2[lenghts2] != '\0')
		lenghts2++;

	ptr = malloc(sizeof(char) * (lenghts1 + lenghts2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; i++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}

	return (ptr);
}
