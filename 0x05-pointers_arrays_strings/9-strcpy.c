#include <stdio.h>
#include "main.h"

/**
* _strcpy - function that copies the string
* pointes to by src, including the terminating
* null byte.
* @dest: pointer to a char
* @src: pointer to a src
* Return: a pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);

}
