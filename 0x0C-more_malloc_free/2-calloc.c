#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory
* for an array, using malloc
* @nmemb:unsigned integer
* @size: unsigned integer
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*(ptr + i) = 0;

	return (ptr);
}
