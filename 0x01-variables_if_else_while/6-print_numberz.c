#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers
 * Return:always 0 (successfull)
 */
int main(void)
{
for (int i=0;i<10;i++)
{
putchar('0' + i);
putchar('\n');
}
return (0);
}
