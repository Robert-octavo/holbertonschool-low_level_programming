#include "main.h"

int prime_n(int n, int i);

/**
 * prime_n - return if the input number
 * is a prime
 * @n: integer
 * @i: integer
 * Return: 1 is prime. 0 is not
 *
 */
int prime_n(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		i = prime_n(n, i + 1);
	}

	if (i != 0 && n % i == 0)
		return (1);
	return (0);
}
/**
* is_prime_number - function that returns one
* if the input integer is a prime number
* otherwise return 0
* @n: integer
*
* Return: integer
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);

	return (prime_n(n, 2));
}
