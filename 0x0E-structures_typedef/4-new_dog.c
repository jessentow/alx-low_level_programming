#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This creates the instances of new dog object
 *
 * @name: The mane of the first
 * @age: The name of the second
 * @owner: The name of the Third
 *
 * Return:This returns the  pointer to structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int great = 0, justice = 0, c;
	dog_t *doggy;

	while (name[great] != '\0')
	great++;
	while (owner[justice] != '\0')
	justice++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
	free(doggy);
	return (NULL);
	}

	doggy->name = malloc(justice * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
	free(doggy->name);
	free(doggy);
	return (NULL);
	}
	for (c = 0; c <= great; c++)
	doggy->name[c] = name[c];

	doggy->age = age;
	doggy->owner = malloc(justice * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
	free(doggy->owner);
	free(doggy->name);
	free(doggy);
																return (NULL);
	}
	for (c = 0; c <= justice; c++)
	doggy->owner[c] = owner[c];
	return (doggy);
}
