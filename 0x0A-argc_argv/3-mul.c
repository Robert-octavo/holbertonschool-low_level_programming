#include <stdio.h>
#include <stlib.h>
/**
* main - a program that multiplies two numbers
* @argc: argument count
* @argv: array of arguments
* Return: Multiplication or 1
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
