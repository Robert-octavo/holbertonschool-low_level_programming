#include "main.h"

/**
* _isdigit - function that checks for a
* digit.
* @c: integer
* Return: 1 if is a digit
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
