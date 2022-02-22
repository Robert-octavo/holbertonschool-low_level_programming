#include "main.h"

/**
* _puts - function that prints a string, followed
* by a new line to stdout
* @str: pointer to char
* Return: lenght
*/
void _puts(char *str)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		_putchar(str[lenght]);

	_putchar('\n');
}
