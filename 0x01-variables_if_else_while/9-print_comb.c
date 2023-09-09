#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers of base 16 in lowercase
 * Return:always 0 (successfull)
 */
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
