#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to a string.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
i++;
}
printf("\n");
}
