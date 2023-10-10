#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
new_dog = malloc(sizeof(dog_t));
if (new_dog != NULL)
{
name_copy = strdup(name);
owner_copy = strdup(owner);
if (name_copy == NULL || owner_copy == NULL) 
{
free(new_dog);
free(name_copy);
free(owner_copy);
return (NULL);
}
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
else
{ 
return (NULL);
}
