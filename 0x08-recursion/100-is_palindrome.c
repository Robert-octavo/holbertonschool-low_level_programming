#include "main.h"

int palindromo(char *c, int indiceInicio, int indiceFin);
/**
 * _strlen_recursion - return the length
 * of a string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindromo - makes thecomparition of each
 * caracter
 * @c: char
 * @indiceInicio: integer
 * @indiceFin: integer
 * Return: integer
 */
int palindromo(char *c, int indiceInicio, int indiceFin)
{
	if (indiceInicio >= indiceFin)
		return (1);

	if (c[indiceInicio] == c[indiceFin])
		return (palindromo(c, indiceInicio + 1, indiceFin - 1));
	else
		return (0);
}
/**
 * is_palindrome - detects if a string is a
 * palandrome
 * @s: puntero a char
 *
 * Return: 1 is palindrome, 0 if not
 *
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindromo(s, 0, _strlen_recursion(s) - 1));
}
