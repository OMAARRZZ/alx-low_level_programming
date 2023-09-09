#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers
 * Return:always 0 (successfull)
 */
int main(void)
{
int i=0;
for(i;i<10;i++)
{
putchar('0' + i);
putchar('\n');
}
return (0);
}
