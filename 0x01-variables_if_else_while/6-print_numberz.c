#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers
 * Return:always 0 (successfull)
 */
int main(void)
{int i=0;
while(i<10)
{
putchar('0' + i);
putchar('\n');
i++;
}
return (0);
}
