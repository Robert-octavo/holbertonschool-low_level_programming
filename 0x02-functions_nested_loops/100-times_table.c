#include "main.h"

/**
 * print_times_table - function that prints the n times tables
 * starting with 0
 * @cant : Integer
 */
void print_times_table(int cant)
{
	int i, j, result, p;

	if (cant >= 0 && cant < 16)
	{
		for (i = 0; i <= cant; i++)
		{
			_putchar(48);

			for (j = 1; j <= cant; j++)
			{
				result = i * j;
				_putchar(44);
				_putchar(32);
				if (result <= 99)
					_putchar(32);
				if ((result > 9) && (result < 100))
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 99)
				{
					p = result / 10;
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
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
}
