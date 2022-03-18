#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: integer
 * @b: integer
 * Return: the addition
 */
ïnt op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substrac two numbers
 * @a: integer
 * @b: integer
 * Return: the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: integer
 * @b: integer
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: integer
 * @b: integer
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - calculates the mod of two numbers
 * @a: integer
 * @b: integer
 * Return: Mod of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
