#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Create a variable of type struct dog
 * @d: Pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
