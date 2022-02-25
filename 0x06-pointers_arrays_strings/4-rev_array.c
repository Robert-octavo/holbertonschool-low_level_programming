#include "main.h"

/**
* reverse_array - function that reverses the content of
* an array of integers
* @a: pointer to an integer
* @n: integer
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int aux;
	int i;
	int j;

	int b[n] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		aux = *(a + j);
		b[i] = aux;
		j--;
	}

	for (i = 0; i < n; i++)
		*(a + i) = b[i];
}
