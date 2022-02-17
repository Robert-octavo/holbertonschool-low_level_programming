#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * character.
 * @c: integer
 * Return: 1 if is uppercase 
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
