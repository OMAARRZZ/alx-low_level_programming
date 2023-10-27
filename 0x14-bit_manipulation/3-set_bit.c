#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to be set to 1, starting from 0.
 * Return: 1 if the operation was successful, or -1 if an error occurred (index is out of bounds).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
i}
unsigned long int mask = 1UL << index;
*n = *n | mask;
return (1);
}
