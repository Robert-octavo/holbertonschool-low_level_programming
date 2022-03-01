#include <stdio.h>

/**
* print_diagsums - function that prints the
* sum of two diagonals os a square matrix
* of integers
* @a: pointer to an int
* @size: integer
*
*/
void print_diagsums(int *a, int size)
{
	int i, s;
	int suma1, suma2;
	
	s = size * size;
	suma1 = 0;
	suma2 = 0;

	for (i = 0; i < s; i = i + (size + 1))
		suma1 = suma1 + a[i];

	for (i = size - 1; i < s - 1; i = i + (size - 1))
		suma2 = suma2 + a[i];

	printf("%d, %d\n", suma1, suma2);
}
