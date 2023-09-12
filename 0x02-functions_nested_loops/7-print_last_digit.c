#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @c: is number to op on
 * Return: value of the last digit of the number
 */
int print_last_digit(int c)
{
int lastvalue;
lastvalue = abs(c) % 10;
_putchar('0' + lastvalue);
return (lastvalue);
}
