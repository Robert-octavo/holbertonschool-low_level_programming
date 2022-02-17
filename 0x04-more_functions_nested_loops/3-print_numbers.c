#include "main.h"

/**
 * print_numbers - function that prints the number,
 * from 0 to 9, followeb by a new line.
 */
void print_numbers(void)
{
	char c;

	c = '0';

	while(c <= '9')
	{
		_putchar(c);	
		c++;
	}
	_putchar('\n');
}
