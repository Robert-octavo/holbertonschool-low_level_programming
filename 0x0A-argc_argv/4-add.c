#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - a program that adds positive numbers
* @argc: argument count
* @argv: array of arguments
* Return: add
*/
int main(int argc, char *argv[])
{
	int i, j, suma;

	suma = 0;
	
	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma = suma + atoi(argv[i]);
	}

	printf("%d\n", suma);
	return (0);
}
