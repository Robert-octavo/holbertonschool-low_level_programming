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
	int j;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (== 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');

	return (0);
}
