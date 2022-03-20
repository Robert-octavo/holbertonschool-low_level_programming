#include "variadic_fuctions.h"

/**
 * print_c - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_i - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_f - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_f(va_list arg)
{
	float i;

	i = va_arg(arg, double);
	printf("%f", i);
}

/**
 * print_s - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_s(va_list arg)
{
	char *ptr;

	ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ptr);
}

/**
 * print_all - function that prints anything
 * @format: list of types of argument
 */
void print_all(const char * const format, ...)
{
    va_list args;
	int i = 0, j = 0;
	char *s = "";
	f_print_ funcion[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(args, format);

    while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcion[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", s);
			funcion[j].f(args);
			s = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
