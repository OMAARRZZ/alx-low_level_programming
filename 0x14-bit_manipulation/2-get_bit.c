#include <limits.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index in an unsigned long integer.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve, starting from 0.
 * Return: The value of the bit at the specified index (0 or 1), or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * CHAR_BIT)
{
return -1;  // Index is out of bounds
}
unsigned long int mask = 1UL << index;
return (n & mask) ? 1 : 0;
}
