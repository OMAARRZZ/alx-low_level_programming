#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to an array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
int i = 0;
if (n > 0)
{
printf("%d", a[i]);
i++;
}
while (i < n)
{
printf(", %d", a[i]);
i++;
}
printf("\n");
}
