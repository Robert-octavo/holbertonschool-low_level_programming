#include <stdlib.h>
#include "dog.h"
int _length(char *str);

/**
 * _length - finds the lenght of a string
 * @str: pointer
 * Return: integer lenght
 */
int _length(char *str)
{
	int length = 0;

	if (!str || !*str)
		return (0);
	length = 1 + _length(length + 1);
	return (length);
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

	dog->name = malloc(sizeof(char) * (_leght(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= _leght(name); i++)
		dog->name[i] = name[i];

	dog->age = age;
	dog->owner = malloc(sizeof(char) * (_leght(owner) + 1));
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
