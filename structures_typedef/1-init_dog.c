#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: who owns the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
