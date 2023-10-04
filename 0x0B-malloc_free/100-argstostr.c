#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments into a new string.
 * @ac: The number of arguments.
 * @av: Array of argument strings.
 * Return: A pointer to a new string containing the concatenated arguments,
 * or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i = 0, j = 0;
char *concatenated_str;
if (ac == 0 || av == NULL)
{
return NULL;
}
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
i++;
}
concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated_str == NULL)
{
return NULL;
}
i = 0;
int position = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
concatenated_str[position] = av[i][j];

