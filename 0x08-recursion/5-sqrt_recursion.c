#include "main.h"


/**
 * _pow - function that returnd the square root
 * of a number
 * @n: integer
 * @i: integer
 * Return: integer
 */
int _pow(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i <= n)
		i = _pow(n, i + 1);
	if (i * i == n)
		return (i);

	return (-1);
}
/**
* _sqrt_recursion - function that returns the
* natural square root of a number
* @n: integer
*
* Return: integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_pow(n, 0));
}
