#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers in 2 digit numbers
 * Return: always 0 (successful)
 */
int main(void) {
int i, z, j;
do
{
for (i = 0; i <= 9; i++)
{
for (z = 0; z <= 9; z++)
{
putchar('0'+i);
putchar('0'+z);
j++;
if (j == 2)
{
if(i != 9 || z != 9)
{
putchar(',');
putchar(' ');
j = 0;
}
}else putchar(' ');
}        
}
}while (i == 9 || z == 9);
putchar('\n');
return (0);
}
