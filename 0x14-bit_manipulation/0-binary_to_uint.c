#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Function that converts a binary
 * number to an unsigned int
 * @b: Pointer to a string
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, mul;
	int len;

	n = 0;/*Converted number*/
	mul = 1;


	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len ++);

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
                        return (0);

		num = num + (b[len] - '0') * mul;
		mul = mul * 2;
	}
	return (n);
}
