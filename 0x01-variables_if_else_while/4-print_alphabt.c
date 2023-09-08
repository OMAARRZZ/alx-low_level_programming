#include <stdio.h>
/**
 * main - entry point
 * description: prints all letters but 2
 * Return: always 0 (successfull)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
