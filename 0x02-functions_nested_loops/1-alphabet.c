#include <stdio.h>
/* Function prototype for print_alphabet */
void print_alphabet(void);
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
/* Function to print the lowercase alphabet */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
