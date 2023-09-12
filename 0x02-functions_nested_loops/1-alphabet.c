#include<stdio.h>
#include<main.h>
/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (successfull)
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
