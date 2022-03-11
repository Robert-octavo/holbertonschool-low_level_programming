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
	unsigned int lens1 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		lens1++;

	ptr = malloc(lens1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	lens1 = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
		ptr[lens1++] = *(s1 + i);

	for (i = 0; s2[i] && i < n; i++)
		ptr[lens1++] = *(s2 + i);

	*(ptr + lens1) = '\0';
	return (ptr);
}
