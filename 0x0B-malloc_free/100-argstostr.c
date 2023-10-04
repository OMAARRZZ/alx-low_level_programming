#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
{
return NULL;
}
int total_length = 0;
int i = 0;
while (i < ac)
{
total_length += strlen(av[i]) + 1; // +1 for the newline character
i++;
}
char *result = malloc(total_length + 1); // +1 for the null terminator
if (result == NULL)
{
return NULL;
}
int index = 0;
i = 0;
while (i < ac)
{
int arg_length = strlen(av[i]);
strncpy(result + index, av[i], arg_length);
index += arg_length;
result[index++] = '\n';
i++;
}
result[total_length] = '\0';
return result;
}
int main(int ac, char *av[])
{

