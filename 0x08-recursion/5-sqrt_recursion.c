#include "main.h"
/**
 * helper - helper function to find square root
 * @n: number to find square root of
 * @i: possible square root
 * Return: natural square root or -1 if does not exist
 */
int helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: natural square root or -1 if does not exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{return (helper(n, 0));
}
}
