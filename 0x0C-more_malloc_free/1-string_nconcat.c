#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 * Return: A pointer to the concatenated string
 * or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
{
return NULL;
}
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[j] != '\0' && j < n)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';
return concat;
}
