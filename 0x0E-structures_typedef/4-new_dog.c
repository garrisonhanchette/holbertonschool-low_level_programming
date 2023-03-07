#include <stddef.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog
 * @name: New dog's name
 * @age: New dog's age
 * @owner: New dog's owner
 *
 * Return: Pointer to new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newDogName, *newDogOwner;
	unsigned int i, j;
	dog_t *ar;

	ar = malloc(sizeof(dog_t));
	if (ar == NULL || name == NULL || owner == NULL || age != age)
	{
		free(ar);
		return (NULL);
	}

	newDogName = malloc(strlen(name) + 1);
	newDogOwner = malloc(strlen(owner) + 1);

	if (newDogName == NULL || newDogOwner == NULL)
	{
		free(newDogOwner);
		free(newDogName);
		free(ar);
		return (NULL);
	}

	for (i = 0; i < strlen(name); i++)
		newDogName[i] = name[i];
	newDogName[i] = '\0';

	for (j = 0; j < strlen(owner); j++)
		newDogOwner[j] = owner[j];
	newDogOwner[j] = '\0';

	ar->name = newDogName;
	ar->age = age;
	ar->owner = newDogOwner;

	return (ar);
}
