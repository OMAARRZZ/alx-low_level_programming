#include "main.h"
#include <unistd.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a string.
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;  
}
for (int i = length - 1; i >= 0; i--)
write(1, &s[i], 1);
write(1, "\n", 1);
}
