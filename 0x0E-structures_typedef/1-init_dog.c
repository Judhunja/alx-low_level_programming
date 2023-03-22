#include <stdio.h>
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
int main(void)
{
	struct dog my_dog;
	char name[] = "Buddy";
	char owner[] = "John Smith";

	init_dog(&my_dog, name, 5.5, owner);
	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);
	return (0);
}
