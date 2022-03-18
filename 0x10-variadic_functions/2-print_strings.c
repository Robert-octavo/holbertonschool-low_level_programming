#include "variadic_functions.h"
/**
 * print_strings - Write a function that prints
 * strings, followed by a new line
 * @separator: where separator is the string to be printed
 * @n: is the number of integers passed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
