#include "search_algos.h"

/**
 * min - fucnion to get the min value
 * @a: int
 * @b: int
 * Return: integer
 */

size_t min(size_t a, size_t b)
{
	return (b > a ? a : b);
}

/**
 * jump_search - Write a function that searches
 * for a value in a sorted array of integers using the
 * Jump search algorith
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is
 * NULL, your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, jump = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	i = jump;

	/*Finding the block*/
	for (; jump < size && array[jump] < value; jump += step)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);

}
