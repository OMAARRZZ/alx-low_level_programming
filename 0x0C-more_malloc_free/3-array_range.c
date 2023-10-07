#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 * Return: Pointer to the newly created array
 * or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
if (min > max)
{
return (NULL);
}
int *arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
int i = 0;
int currentValue = min;
while (i <= max - min)
{
arr[i] = currentValue;
i++;
currentValue++;
}
return (arr);
}
