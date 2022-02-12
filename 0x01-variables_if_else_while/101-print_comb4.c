#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of three digits
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i;
	int j;
	int a;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;
		while (j <= 9)
		{
			a = j + 1;
			while (a <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(a + '0');
				if (i == 7 && j == 8 && a == 9)
					break;
				putchar(',');
				putchar(' ');
				a++;
			}
			j++;
		}
	}
	putchar('\n');

	return (0);
}
