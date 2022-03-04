#include <stdio.h>
/**
* main - printrs the name of the program
* @agrc: argument count
* @argv: array of pointers
*
* Return: Nothing
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	
	return (0);
}
