#include "main.h"

/**
* print_rev - function that prints a string, in reverse,
* followed by a new line
* @s: pointer to char
* Return: lenght
*/
void print_rev(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; lenght++)
		*s++
	while (lenght >= 0)
	{
		_putchar(str[lenght]);
		lenght--;
	}

	_putchar('\n');
}
