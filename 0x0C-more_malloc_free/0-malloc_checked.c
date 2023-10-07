#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: A pointer to the allocated memory
 * or terminate the program with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
printf("Error: malloc failed\n");
exit(98);
}
return ptr;
}
