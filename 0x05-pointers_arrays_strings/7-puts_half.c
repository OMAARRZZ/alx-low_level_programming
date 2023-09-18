#include "main.h"
#include <unistd.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
int length = 0;
int start;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}
while (str[start] != '\0')
{
write(1, &str[start], 1);
start++;
}
write(1, "\n", 1);
}
