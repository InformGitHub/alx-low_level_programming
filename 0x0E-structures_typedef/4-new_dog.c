#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - gets a lenght of string
 * @str: string getting lenght
 *
 * Return: str's lenght
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcpy - return @dest with a copy of a string from @src
 * @src: string's copying
 * @dest: string's copy to here
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	for (; src[k]; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 *
 * Return: struct pointer dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!((*dog).owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
