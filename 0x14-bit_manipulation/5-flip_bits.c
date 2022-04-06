#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Function that returns the number of
 * bits you would need to flip to get from one number
 * to another
 * @n: Unsigned long int - First number
 * @m: Unsigned long int - Second number
 * Return: The number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;/*Check how many bit we need to change*/
	unsigned resul = 0;

	while (xor > 0)
	{
		resul = resul + (xor & 1);/*check with & operator if both are 1 add 1 to result*/
		xor = xor >> 1;/*move xor 1 position to check in the next iteration*/
	}

	return (resul);
}
