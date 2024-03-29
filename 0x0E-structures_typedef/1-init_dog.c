#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * main - initializes struct dog with specific values
 * @d: name, age and owner of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
