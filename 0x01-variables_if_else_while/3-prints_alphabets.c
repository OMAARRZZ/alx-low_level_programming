#include <stdio.h>
/**
 * main - entry point 
 * description: prints lower and upper case letters
 * Return: always 0 (successfull)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
