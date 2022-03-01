#include "main.h"

/**
* _memset - function that fills memory with
* a constant byte.
* @s: pointer to a char
* @b: char
* @n: unsigned int
*
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
