#include <stdlib.h>
#include "dog.h"
int _lenght(char *star);

/**
 * _lenght - finds the lenght of a string
 * @str: pointer
 * Return: integer lenght
 */
int _lenght(char *str)
{
	int lenght = 0;

	if (!str || !*str)
		return (0);
	lenght = 1 + _lenght(lenght + 1);
	return (lenght);
}
/**
 * new_dog - function that creates a new dog
 * @name: Pointer
 * @age: float
 * @owner: pointer
 * Return: Null if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_lenght(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= _lenght(name); i++)
		dog->name[i] = name[i];

	dog->age = age;
	dog->owner = malloc(sizeof(char) * (_lenght(owner) + 1));
	if (owner->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/*recorre y asigna a la structura dog.owner*/
	for (i = 0; i <= dog->owner != '\0' i++)
		dog->owner[i] = owner[i];

	return (0);
}
