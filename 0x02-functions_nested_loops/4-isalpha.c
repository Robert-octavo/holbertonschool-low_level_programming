#include "main.h"

/**
 * _isalpha - checks if for alphabetic character.
 * @c: integer
 * Return: 1 if character is lowercase or uppercase
 * return: 0 otherwise
 * 
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
