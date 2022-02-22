#include "main.h"

/**
* rev_string - function that reverse a string
* @s: pointer to char
*/
void rev_string(char *s)
{
	int lenght, i;
	char s2[500];

	lenght = 0;

	while (s[lenght])
	{
		s2[lenght] = s[lenght];
		lenght++;
	}

	lenght = lenght - 1;
	i = 0;

	while (lenght >= 0)
	{
		s[lenght] = s2[i];
		lenght--;
		i++;
	}
}
