#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the time table
 * Return: void
 */
void times_table(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
if (j == 9)
{
printf("%d\n", i*j);
j++;
}
else
{
printf("%d, ", i*j);
j++;
}
}
i++;
}
}
