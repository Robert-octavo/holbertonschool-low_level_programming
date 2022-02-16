#include <stdio.h>

/**
 * main - print the first 50 Fibonacci number
 * startin with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, t1, t2, next;

	t1 = 1;
	t2 = 2;
	next = t1 + t2;

	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= 50; i++)
	{
		printf("%lu", next);

		if (i == 50)
			break;
		printf(", ");
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}

	return (0);
}
