#include <stdio.h>
/**
 * main - entry point
 * description: prints all alphabets in reverse
 * Return:always 0 (successfull)
 */
int main(void)
{
int i;
for (i = 25; i >= 0; i--)
{
putchar('a' + i);
}
putchar('\n');
return (0);
}
