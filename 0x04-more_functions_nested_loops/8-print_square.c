#include "main.h"
/**
 * print_square - prints a square of '#' characters in the terminal
 * @size: The size of the square
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
i = 0;
while (i < size)
{
 = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
