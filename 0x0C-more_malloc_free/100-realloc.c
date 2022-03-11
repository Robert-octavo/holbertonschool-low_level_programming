#include "main.h"
#include <stdlib.h>

/**
* _realloc - function that reallocates a memory
* block using malloc and free
* @ptr: pointer
* @old_size: unsigned integer
* @new_size: unsigned integer
* Return: Pointer to the newly created array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)a
{
	int *ptr2;
	int i, size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);

		if (ptr2 == NULL)
			return (NULL);

		return (ptr2);
	}

}
