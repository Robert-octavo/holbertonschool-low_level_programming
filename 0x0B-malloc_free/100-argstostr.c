#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments 
* @ac: integer
* @av: double pointer
* Return: a pointer
*/
char *argstostr(int ac, int **av)
{
	char *ptr;
	int i, j, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			size++;
	}
	size++;

	ptr = malloc(sizeof(char) * (size + ac));
	size = 0;

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			ptr[size] = *(*(av + i) + j);
			size++;
		}
		ptr[size] = '\0';
		size++;
	}
	return (ptr);
}
