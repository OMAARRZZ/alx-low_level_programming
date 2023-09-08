#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* description: getting the last digit of a random generated number
* return always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n =rand() - RAND_MAX / 2;
int lastdigit = n % 10;
if (lastdigit > 5)
{
 printf("Last digit of %d is %d and is greater than 5\n" , n , lastdigit );
} else if ( lastdigit == 0)
{
 printf("Last digit of %d is 0\n" , n , lastdigit);
} else if (lastdigit < 6 )
{
 printf("Last digit of %d is less than 6 but not 0\n" , n , lastdigit);
}
return (0);
}
