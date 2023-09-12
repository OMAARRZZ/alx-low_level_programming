#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks if n is +ve or -ve
 * @n: is the value to be checked
 * Return: 1 if +ve, 0 if zero, -1 if -ve
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (1);
}
}
