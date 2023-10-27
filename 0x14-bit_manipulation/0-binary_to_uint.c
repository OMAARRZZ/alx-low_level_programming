#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number represented
 * as a string to an unsigned int.
 * @b: A pointer to a binary string consisting of '0' and '1' characters.
 * Return: The converted unsigned integer, or 0
 * if there is an invalid character in the input.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] == '0')
{
result <<= 1;
}
else if (b[i] == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
i++;
}
return (result);
}
