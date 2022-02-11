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
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
