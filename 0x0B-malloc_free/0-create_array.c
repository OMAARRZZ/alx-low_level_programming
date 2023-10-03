#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char *c)
{
char *array;
unsigned int i;
(void)c;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return NULL;
}
i = 0;
while (i < size)
{
array[i] = 0x0a;
i++;
}
return (array);
}
