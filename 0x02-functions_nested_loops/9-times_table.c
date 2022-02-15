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
				if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar(result + '0');
				if (result == 81)
					break;
				_putchar(44);
				_putchar(32);
			}
			_putchar(10);
		}
	}
}
