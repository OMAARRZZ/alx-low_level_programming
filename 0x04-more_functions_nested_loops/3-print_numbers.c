#include"main.h"
/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: always 0 (successfull)
 */
void print_numbers(void)
{
for (int i = 0; i < 10; i++)
{
__putchar('0' + i);
}
__putchar('\n');
}
