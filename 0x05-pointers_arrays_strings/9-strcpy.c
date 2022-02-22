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
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
