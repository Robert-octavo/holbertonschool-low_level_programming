#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates
* two strings
* @s1:pointer to a char
* @s2: pointer to a char
* @n: unsigned integer
* Return: a new string or Null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = n;

	for (i = 0; *(s1 + i) != '\0'; i++)
		lens1++;

	ptr = malloc(sizeof(char) * (lens1 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);

	for (j = 0; j < n && *(s2 + j) != '\0'; i++, j++)
		*(ptr + i) = *(s2 + j);

	*(ptr + i) = '\0';
	return (ptr);
}
