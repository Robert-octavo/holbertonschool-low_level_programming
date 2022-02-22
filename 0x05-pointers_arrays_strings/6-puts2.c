#include "main.h"

/**
* puts2 - function that prints every other
* character of a string, starting with the
* first character
* @str: pointer to char
*/
void puts2(char *str)
{
	int lenght;

	for (lenght = 0; str[lenght] != '\0'; lenght = lenght + 2)
		_putchar(str[lenght]);
	_putchar('\n');
}
