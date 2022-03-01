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
	unsigned int i, j, count;

	i = 0;
	count = 0;

	while (*(accept + i))
	{
		j = 0;

		while (*(s + j) != ' ')
		{
			if (*(accept + i) == *(s + j)
					count++;

			j++
		}
		i++;
	}
	return (count);
}
