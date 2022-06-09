#include <stdio.h>
#include "main.h"
/**
* wildcmp - function that compares two strings and
* returns 1 if the strings can be considered identical,
* otherwise return 0.
* @s1:  pointer to the adderss of string s
* @s2: string to set value to
*
* Return: integer
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
