#include <stdio.h>
#include "main.h"
/**
 * get_bit - Function that returns the value
 * of a bit at a given index
 * @n: Unsigned long int - number
 * @inde: Insigned long int - index
 * Return: the value of the bit at index or
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;
	unsigned long int size = (sizeof(n) * 8);

	if (n > 0)
		value = (n >> index) & 1;
	return (value);
}
