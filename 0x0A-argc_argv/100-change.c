#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of
* coins to make change
* @argc: argument count
* @argv: array of arguments
* Return: the amount of cents
*/
int main(int argc, char *argv[])
{
	int cents, i;

	i = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		i = i + 1;
	}

	printf("%d\n", i);
	return (0);
}
