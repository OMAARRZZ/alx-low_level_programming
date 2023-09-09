#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers of base 16 in lowercase
 * Return:always 0 (successfull)
 */
int main(void)
{
int i;
int z;
for (i = 0; i < 10 ; i++)
{
z=i;
while(z<10)
{
putchar('0'+i);
putchar(',');
putchar('0'+z);
z++;
}
}
return (0);
}
