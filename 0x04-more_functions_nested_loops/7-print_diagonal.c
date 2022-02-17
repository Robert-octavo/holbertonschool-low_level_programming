#include "main.h"

/**
* print_diagonal - function that draws a diagonal
* @n: integer
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else if (j < i)
					_putchar(32);
			}
			_putchar('\n');
		}
		
	}
	else
		_putchar('\n');
}
