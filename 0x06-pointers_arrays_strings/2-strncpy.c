#include "main.h"

/**
* _strncpy - function that concatenates two strings
* 
* @dest: pointer to a char
* @src: pointer to a char
* @n: integer
*
* Return: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (j < n) && *(src + j) != '\0'; j++)
	{
		*(dest + j) = *(src + j);
	}

	for (; j < n; j++)
		*(dest + j) = '\0';

	return (dest);
}
