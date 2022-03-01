#include "main.h"

/**
* _strspn - function that gets the length of a
* prefix substring
* @s: pointer to a char
* @accept: pointer to a char
*
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept +i))
			{
				j++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
				return (j);
		}
		s++
	}

	return (j);
}
