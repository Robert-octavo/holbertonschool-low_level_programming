#include <stdio.h>

/**
 * main - Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new linea
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char a;
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
