#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *Return: Return a pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	else
	{
		newDog->name = malloc(strlen(name) + 1);
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		else
		{
			strcpy(newDog->name, name);
		}
		newDog->age = age;

		newDog->owner = malloc(strlen(owner) + 1);
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}
		else
		{
			strcpy(newDog->owner, owner);
		}
	}
	return (newDog);
}
