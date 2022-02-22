#include "main.h"

/**
* _strlen - function that returns the length
* of a string.
* @s: pointer to char
*/
int _strlen(char *s)
{
	int lenght;

	for(lenght = 0;*s != '\0';lenght++)
		s++;
		
	return (lenght);
}
