#include <stdio.h>
#include "main.h"

/**
* print_array - function that prints n elements
* of an array of integers, followed by a new
* line.
* @a: pointer to integer
* @n: integer
*/
void print_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n;

	for (i = 0; i < n; i++)
	{
		if (i == j - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
