#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLength, ownerLength, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	nameLength = ownerLength = 0;
	while (name[nameLength++])
		;
	while (owner[ownerLength++])
		;
	d1->name = malloc(nameLength * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nameLength; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerLength * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerLength; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
