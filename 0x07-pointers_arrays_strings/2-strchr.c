#include "main.h"

/**
* _strchr - function that locates a character
* in a string
* @s: pointer to a char
* @c: char
*
* Return: pointer
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		return (s + i);
		i++;
	}

	if(*(src + i) == c)
		return ((s + i));

	return ('\0');
}
