#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
