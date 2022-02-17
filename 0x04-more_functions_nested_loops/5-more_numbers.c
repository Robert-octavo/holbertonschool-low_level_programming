#include "main.h"

/**
* more_numbers - prints 10 time the number 0 to 14,
* followeb by a new line
*/
void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 11; i++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
			c++;
		}
	_putchar('\n');
	}
}
