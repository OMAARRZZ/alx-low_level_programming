#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int i = 0;
(void)argv;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
