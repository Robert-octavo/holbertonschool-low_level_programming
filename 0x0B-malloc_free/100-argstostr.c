#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments
* @ac: integer
* @av: double pointer
* Return: a pointer
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			size++;
	}

	ptr = malloc(sizeof(char) * (size + 1));
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
		ptr[size] = '\n';
		size++;
	}
	return (ptr);
}
