#include "search_algos.h"

/**
 * print_a - print the array
 * @low: left
 * @hight: right
 * @array: array to print
 * Return: Void
 */

void print_a(size_t low, size_t hight, int *array)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= hight; i++)
	{
		printf("%d", array[i]);
		if (i < hight)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algoritm
 * @array: pointer to the first element of the array to search
 * in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if value is not present in array or if array is Null
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t hight, mid;

	if (array == NULL || size == 0)
		return (-1);

	hight =  size - 1;

	while (low <= hight)
	{
		print_a(low, hight, array);
		mid = (low + hight) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			hight = mid - 1;
	}

	return (-1);
}
