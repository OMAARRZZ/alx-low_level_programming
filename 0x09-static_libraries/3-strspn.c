#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the string of bytes to accept
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j;
int found;
while (s[i])
{
found = 0;
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
found = 1;
break;
}
j++;
}
if (!found)
break;
i++;
}
return (i);
}
