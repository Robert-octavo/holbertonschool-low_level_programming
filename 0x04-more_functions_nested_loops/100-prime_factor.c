#include <stdio.h>

/**
* main - finds and prints the largets
* prime factor of the number
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long n, div, max;

n = 612852475143;
div = 2;

while (n != 0)
{
	if (n % div != 0)
		div = div + 1;
	else
	{
		max = n;
		n = n / div;

		if (n == 1)
		{
			printf("%ld\n", max);
			break;
		}
	}
}
return (0);
}
