#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random valid password for 101-crackme program.
 * Return: Always 0.
 */
int main(void)
{
    int sum = 0;
    int rand_char;
    int target_sum = 2772;
    srand(time(NULL)); 

    while (sum < target_sum)
    {
        rand_char = rand() % 94 + 33;
        putchar(rand_char);
        sum += rand_char;
    }

    putchar(2772 - sum);
    return 0;
}
