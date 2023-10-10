#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name != NULL && age >= 0 && owner != NULL)
{
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
if (name != NULL)
{
newDog->name = malloc(strlen(name) + 1);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
strcpy(newDog->name, name);
}
else
{
newDog->name = NULL;
}
newDog->age = age;
if (owner != NULL)
{
newDog->owner = malloc(strlen(owner) + 1);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
strcpy(newDog->owner, owner);
}
else
{
newDog->owner = NULL;
}
return (newDog);
}
return (NULL);
}
