#include <stdio.h>

/**
 * main - Write a program that prints the all
 * single digit number of base 10 starting from
 * 0
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i = 0;

	for (; i < 10 ; i++)
		printf("%d", i);

	printf("\n");
	return (0);
}
