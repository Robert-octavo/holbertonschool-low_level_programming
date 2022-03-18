#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - write a function that searches for
 * an integer
 * @array: Pointer to array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: first element or -1 if it fails
 */
int main(argc, char *argv[])
{
	int num1, num2;
	char *operador;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operador = argv[2];

	if (get_op_func(operador) == NULL || operador[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(operador)(num1, num2));

	return (0);
}
