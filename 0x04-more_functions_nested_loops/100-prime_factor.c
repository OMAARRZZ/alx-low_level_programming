#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor of n
 */
int main(void)
{
long max_prime = -1;
long n = 612852475143;
while (n % 2 == 0) {
max_prime = 2;
n /= 2;
}
long i = 3;
while (i <= sqrt(n)) {
while (n % i == 0) {
max_prime = i;
n /= i;
}
i += 2;
}
if (n > 2) 
{
max_prime = n;
}
printf("%ld\n", max_prime);
}
