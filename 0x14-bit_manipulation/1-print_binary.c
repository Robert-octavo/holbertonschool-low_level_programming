#include <stdio.h>
#include "main.h"
/**
 * print_binary - Function that prints the binary
 * representation of a number
 * @n: Unsigned long int - number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);/*right shift by 1 n*/
	_putchar((n & 1) + '0');/*print the least significant bit*/
}
