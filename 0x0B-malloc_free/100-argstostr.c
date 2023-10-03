#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i = 0, j = 0, len, total_len = 0;
int k = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (i < ac)
{
len = 0;
while (av[i][len] != '\0')
{
len++;
}
total_len += len;
i++;
}
str = malloc(sizeof(char) * (total_len + ac + 1));
if (str == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
len = 0;
while (av[i][len] != '\0')
{
str[k] = av[i][len];
len++;
k++;

