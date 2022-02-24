#include "main.h"

/**
* _strncat - function that concatenates two strings
* 
* @dest: pointer to a char
* @src: pointer to a char
* @n: integer
*
* Return: pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
		i++;

	for (j = 0; (j < n) && *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
