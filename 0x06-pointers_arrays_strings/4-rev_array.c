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
	int temp, i;

	temp = 0;

	for (i = 0; i < n--; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
	}
}
