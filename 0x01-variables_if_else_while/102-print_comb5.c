#include <stdio.h>
/**
 * main - entry point
 * description: prints all possible combinations of two two-digit numbers.
 * Return: always 0 (successful)
 */
int main(void) 
{
int i, z, j, y;
for (i = 0; i < 10 ; i++)
{
for (z = 0; z < 10 ; z++)
{
for (j = 0; j < 10 ; j++)
{
for (y = 0; y < 10 ; y++)
{
putchar('0' + i);
putchar('0' + z);
putchar(' ');
putchar('0' + j);
putchar('0' + y);
if (i != 9 || z != 9 || j != 9 || y != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
};
for (i = 0;i < 10 ; i++)
{
for (z = 0;z < 10 ; z++)
{
for (j = 0;j < 10 ; j++)
{
for (y = 0;y < 10 ; y++)
{   
putchar('0' + i);
putchar('0' + z);
putchar(' ');
putchar('0' + j);
putchar('0' + y);
if (i != 9 || z != 9 || j != 9 || y != 9 )
{
putchar(',');#include <stdio.h>
/**
 * main - entry point
 * description: prints all possible combinations of two two-digit numbers.
 * Return: always 0 (successful)
 */
int main(void) {
int i, z, j, y;
for (i = 0;i < 10 ; i++)
{
for (z = 0;z < 10 ; z++)
{
for (j = 0;j < 10 ; j++)
{
for (y = 0;y < 10 ; y++)
{
putchar('0' + i);
putchar('0' + z);
putchar(' ');
putchar('0' + j);
putchar('0' + y);
if (i != 9 || z != 9 || j != 9 || y != 9 )
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
