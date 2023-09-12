#include "main.h"
/**
 * main - entry point 
 * description: prints lowercase letters
 * Return: void
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
