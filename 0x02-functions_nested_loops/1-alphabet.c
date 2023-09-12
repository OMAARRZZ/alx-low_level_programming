#include <stdio.h>
/**
 * prototype
 */
int _putchar(char c);
/**
 * function to print lowercase alphabets
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z') {
_putchar(letter);
letter++;
}
_putchar('\n');
}
/**
 * main - entry point
 * description: prints alphabets in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
print_alphabet();
return (0);
}
