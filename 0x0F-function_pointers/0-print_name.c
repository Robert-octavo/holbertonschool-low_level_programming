#include "function_pointer.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: Pointer to char
 * @f: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
