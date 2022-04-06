#include <stdio.h>
#include "main.h"
/**
 * set_bit - Function that sets the value of
 * a bit to 1 at a given index
 * @n: Unsigned long int - number
 * @index: Insigned long int - index
 * Return: 1 if it worked or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(n) * 8);

	if (index > size)
		return (-1);
	*n = *n | 1 << index;

	return (1);
}
