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
	char c = 'a';

	for (; c <= 'z'; c++)
	{

		if ((c != 'q') && (c != 'e'))
			putchar(c);
	}
	putchar('\n');

	return (0);
}
