#include <stdio.h>

/**
 * main - the Fizz-Buzz test is an interview
 * question designed to help filter out 99.5
 * 
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ",i);
	}
	return (0);
}