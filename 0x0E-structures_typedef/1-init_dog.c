#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * struct dog - a struct representing a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */
struct dog
{
    char name[50];
    float age;
    char owner[50];
};

/**
 * init_dog - initializes a struct of type dog with the provided values
 * @d: pointer to the dog struct to be initialized
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;
    if (name == NULL)
        d->name[0] = '\0';
    else
        strncpy(d->name, name, sizeof(d->name));
    d->age = age;
    if (owner == NULL)
        d->owner[0] = '\0';
    else
        strncpy(d->owner, owner, sizeof(d->owner));
}
