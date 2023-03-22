#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - prints the length of a string
 *
 * @str: string whose length is to be calculated
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copies the length of a string
 * @dest: destination string
 * @src: source string
 *
 */

void _strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * new_dog - creates a new dog record
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	int namelen = _strlen(name) + 1;

	new_dog->name = (char *) malloc(namelen * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	int ownerlen = _strlen(owner) + 1;

	new_dog->owner = (char *) malloc(ownerlen * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
