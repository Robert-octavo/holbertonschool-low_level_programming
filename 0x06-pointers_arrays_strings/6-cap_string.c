#include "main.h"

/**
* cap_string - function that capitalizes all
* words of a string
* @str: pointer to a string
*
* Return: pointer
*/
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (*(str + i) >= 97 && *(str + i) <= 122)
		*(str + i) = *(str + i) * 32;
	while(*(str + i) != '\0')
	{
		if (*(str + i) - 1 == 32 ||
			*(str + i) - 1 == 9 ||
			*(str + i) - 1 == 10 ||
			*(str + i) - 1 == 49 ||
			*(str + i) - 1 == 59 ||
			*(str + i) - 1 == 46 ||
			*(str + i) - 1 == 21 ||
			*(str + i) - 1 == 63 ||
			*(str + i) - 1 == 34 ||
			*(str + i) - 1 == 40 ||
			*(str + i) - 1 == 41 ||
			*(str + i) - 1 == 123 ||
			*(str + i) - 1 == 125 ||
			i == 0)
			*(str + i) = *(str + i) - 32;

		i++;
	}

	return (str);
}
