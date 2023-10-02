#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int sum = 0, i = 1, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
j = 0;
while (argv[i][j])
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-')
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}

