#include "main.h"

/**
 * print_triangle - function that prints
 * a triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
					_putchar('\n');
				}
				else
					_putchar(32);
			}
		}
		
	}
	else
		_putchar('\n');
}
