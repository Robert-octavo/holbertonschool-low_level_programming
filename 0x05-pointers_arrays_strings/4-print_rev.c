#include "main.h"

/**
* print_rev - function that prints a string, in reverse,
* followed by a new line
* @s: pointer to char
* Return: lenght
*/
void print_rev(char *s)
{
	int lenght, i;

	lenght = 0;

	while (s[lenght])
		lenght++;

	i = lenght - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
