#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * Prints all the letters except q and e
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
		putchar((i) + '0');
	putchar('\n');

	return (0);
}
