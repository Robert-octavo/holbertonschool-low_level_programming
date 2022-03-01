#include "main.h"

/**
* _memcpy - function that copies memory
* area.
* @dest: pointer to a char
* @src: pointer to a char
* @n: unsigned int
*
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
