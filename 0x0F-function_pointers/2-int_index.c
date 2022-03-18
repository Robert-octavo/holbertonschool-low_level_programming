#include "function_pointers.h"

/**
 * int_index - write a function that searches for
 * an integer
 * @array: Pointer to array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: first element or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
