#include "main.h"

/**
 * times_table - function that prints the 9 times tables
 * starting with 0
 *
 */
void times_table(void)
{
	int a, i, j, result;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				result = i * j;
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (result == 81)
					break;
				_putchar(44);
				_putchar(32);
			}
			_putchar(10);
		}
	}
}
