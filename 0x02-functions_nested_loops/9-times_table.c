#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the time table
 * Return: void
 */
void times_table(void)
{
int num, mult, prod;
for (num = 0 ; num <= 9; num++)
{
_putchar(0);
for (mult =1; mult <=9; mult++)
{
prod = num * mult;
_putchar(' ');
_putchar(',');
if (prod <= 9)
{
_putchar(' ');
}
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
