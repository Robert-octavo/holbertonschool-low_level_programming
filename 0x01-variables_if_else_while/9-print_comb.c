#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of singe-digit numbers
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
