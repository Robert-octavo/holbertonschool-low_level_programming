#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 * jack Bauer, Starting from 00:00 to 23:59
 *
 */
void jack_bauber(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(10);
		j++
		}
	}
}
