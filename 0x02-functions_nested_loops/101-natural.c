#include <stdio.h>

/**
 * main - sum of all the number multiples of
 * 3 or 5 below1 1024
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	j = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j = j + i;
	}

	printf("%d\n", j);

	return (0);
}
