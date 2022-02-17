#include <stdio.h>

/**
* main - finds and prints the largets
* prime factor of the number
* 612852612852
* Return: Always 0.
*/
int main(void)
{
unsigned int n, div, ans, max;

n = 612852475143;
div = 2;
ans = 0;

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
			printf("%u\n", max);
			ans = 1;
			break;
		}
	}
}
return (0);
}
