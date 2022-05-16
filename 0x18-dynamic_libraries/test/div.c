#include <stdio.h>

int div(int a, int b);

/**
* div - function add
* null byte.
* @a: integer
* @b: integer
* Return: add
*/
int div(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a / b);
}
