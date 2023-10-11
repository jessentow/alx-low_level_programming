#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/*
 * _strlen - This will return the ler of string
 * @s: This is the string to check
 *
 * Return: returns the length of the string
 *
 * Descriptiong - Longer descritpion
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
	a++;
	}

	return (a);
}
/**
 * *_strcpy - This copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to  where we copy the string
 * @src: This is the  string to be copied
 *
 * Return: Returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n, a;

	n = 0;

	while (src[n] != '\0')
	{
	n++;
	}

	for (a = 0; a < len; a++)
	{
	dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n1, n2;

	n1 = _strlen(name);
	n2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (n1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (n2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
