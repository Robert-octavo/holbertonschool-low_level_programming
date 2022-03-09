#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional
* grid previously created by you
* @grid: pointer to pointer
* @height: integer
* Return: Nothing
*/
void free_gird(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i);
		*(grid + i) = NULL;
	}
	free(grid);
	grid = NULL;
}
