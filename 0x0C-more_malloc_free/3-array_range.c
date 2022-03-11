#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array
* of integers
* @min: integer
* @max: integer
* Return: Pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr = malloc(size * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++)
	{
		*(ptr + i) = min;
		min++;
	}

	return (ptr);
}
