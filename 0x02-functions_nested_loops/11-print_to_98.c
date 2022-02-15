#include "main.h"

/**
 * print_to_98 print all natural numbers from
 * n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d \n", n);
	else if (n == 0)
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%D", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
}
