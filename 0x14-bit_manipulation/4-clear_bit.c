#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to modify
 * @index: the index of the bit to clear (starting from 0)
 * Return: 1 if it worked, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
