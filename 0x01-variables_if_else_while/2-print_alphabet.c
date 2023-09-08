#include <stdio.h>
/**
 * main - entry point
 * description: prints all the letters
 * Return: always 0 (successfull)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
