#include "3-calc.h"

/**
 * main -performs an operation
 * @argc: integer
 * @argv: array
 * Return: Result
 */
int main(int argc, char *argv[])
{
	int (*res)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if(strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(argv[2]);

	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", res(num1, num2));

	return (0);
}
