#include "main.h"

/**
* print_number - prints a number
* whit putchar
* @n: integer
*/
void print_number(int n)
{
	unsigned int i = n
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	
	if (n == 0)
		_putchar('0');

	if (i / 10 > 0)
		print_number(i / 10);

	_putchar(i % 10 + '0');

}
