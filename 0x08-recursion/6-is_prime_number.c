#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return 0;
}
else
{
return is_prime_recursive(n, 2);
}
}
/**
 * is_prime_recursive - Recursive function to check for primality
 * @n: The number to check for primality
 * @divisor: The current divisor being tested
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
if (divisor > n / 2)
{
return 1;
}
else if (n % divisor == 0)
{
return 0;
}
else
{
return is_prime_recursive(n, divisor + 1);
}
}
