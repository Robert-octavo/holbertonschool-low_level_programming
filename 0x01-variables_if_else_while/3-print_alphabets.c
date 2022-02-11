#include <stdio.h>

/**
 * main - Write a program that prints the alphabet
 * in lowercase, and then in Uppercase, followed
 * by a new line
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x));
	for (int x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
