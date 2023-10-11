#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to operate on.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL || action != NULL || size != 0)
{
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
return;
}
