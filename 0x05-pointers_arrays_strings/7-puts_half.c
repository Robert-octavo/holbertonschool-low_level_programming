#include "main.h"

/**
* puts_half - function that prints half of
* a string, followed by a new line
* @str: pointer to char
*/
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	if ((i % 2) == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
