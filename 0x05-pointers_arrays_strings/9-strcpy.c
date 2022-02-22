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
	int l = 0;
	int i = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; i < l; i++)
		dest[i] = src[i];

	dest[l] = '\0';
	return (dest);

}
