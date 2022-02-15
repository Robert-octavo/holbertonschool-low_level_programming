#include "main.h"

/**
 * times_table - function that prints the 9 times tables
 * starting with 0
 *
 */
void times_table(void)
{
	int i, j, result;

		for (i = 0; i <= 9; i++)
		{
			_putchar(48);

			for (j = 1; j <= 9; j++)
			{
				result = i * j;
				_putchar(44);
				_putchar(32);
				if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(32);
					_putchar(result + '0');
				}
			}
			_putchar(10);
		}
}
