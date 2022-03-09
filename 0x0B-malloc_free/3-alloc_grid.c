#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers
* @width: integer
* @height: integer
* Return: Null on failure
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, a;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		*(ptr + i) = malloc(sizeof(int) * width);

	for (j = 0; j < height; j++)
	{
		for (a = 0; a < width; a++)
			*(*(ptr + j) + a) = 0;
	}

	return (ptr);
}
