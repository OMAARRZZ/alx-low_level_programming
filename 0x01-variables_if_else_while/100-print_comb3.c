#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers 2 diff digit numbers
 * Return: always 0 (successful)
 */
int main(void)
{
int i, z;
for (i = 0; i < 10; i++)
{
for (z = i + 1; z < 10; z++)
{
putchar('0' + i);
putchar('0' + z);
if (i != 8 || z != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return 0;
}
