#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of a function.
 * @main_func_start: Starting address of the function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(char *main_func_start, int num_bytes);
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 on success, 1 for incorrect arguments, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
char *main_func_start = (char *)main;
print_opcodes(main_func_start, num_bytes);
return (0);
}
void print_opcodes(char *main_func_start, int num_bytes)
{
printf("Opcode for main:\n");
int i = 0;
while (i < num_bytes)
{
printf("%02x", main_func_start[i] & 0xFF);
if (i != num_bytes - 1)
{
printf(" ");
}
i++;
}
printf("\n");
}
