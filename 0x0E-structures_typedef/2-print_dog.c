#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the attributes of a struct dog
 * @d: Pointer to a struct dog
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age != NULL ? d->age : "(nil)");
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
