#include "dog.h"
#include <stdlib.h>
#include <string.h>

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        return NULL; // Failed to allocate memory
    }

    // Allocate memory for name and owner, and copy the strings
    new_dog->name = malloc(strlen(name) + 1);
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog);
        return NULL; // Failed to allocate memory
    }
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
