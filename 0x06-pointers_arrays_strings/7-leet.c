#include "main.h"

/**
* leet - encode a string into 1337
*
* @s: pointer to a string
*
* Return: pointer
*/
char *leet(char *s)
{
	int i, j;
	char l [] = "aAeEoOtTlL";
	char n [] = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; n[j]; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}

	return (s);
}
