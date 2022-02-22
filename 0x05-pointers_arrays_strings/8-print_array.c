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

	while (n > 0)
	{
		if (i == j - 1)
			printf("%d",a[i]);
		else
			printf("%d, ",a[i]);
		n--;
		i++;
	}
}
