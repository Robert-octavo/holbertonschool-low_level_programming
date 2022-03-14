#include <stdio.h>
/**
 * main - program that prints the name of the
 * file it was compiled from, followeb by a
 * new line
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
