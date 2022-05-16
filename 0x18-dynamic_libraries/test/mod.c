#include <stdio.h>

int mod(int a, int b);

/**
* mod - function add
* null byte.
* @a: integer
* @b: integer
* Return: add
*/
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a % ((b * -1)));
}
