#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: is number to op on
 * Return: value of the last digit of the number
 */
int print_last_digit(int c)
{
int lastvalue;
if (c == INT_MIN) 
{
c = 8;
}
if (c < 0) 
{
c = -c;
} 
else 
{
c = c;
}
lastvalue = c % 10;
_putchar('0' + lastvalue);
return lastvalue;
}
