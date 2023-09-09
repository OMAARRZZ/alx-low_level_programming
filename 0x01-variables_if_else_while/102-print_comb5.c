#include <stdio.h>
/**
 * main - entry point
 * description: prints all possible combinations of two two-digit numbers.
 * Return: always 0 (successful)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++) 
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar(',');
putchar(' ');
}
}
return (0)
}
