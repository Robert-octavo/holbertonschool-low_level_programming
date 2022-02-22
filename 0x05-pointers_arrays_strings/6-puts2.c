#include "main.h"

/**
* puts2 - function that prints every other
* character of a string, starting with the
* first character
* @str: pointer to char
*/
void puts2(char *str)
{
	int lenght, i;

	i = 0;
	while (str[i])
		i++;

	for (lenght = 0; i <= 0; lenght = lenght + 2, i--)
		_putchar(str[lenght]);
	_putchar('\n');
}
