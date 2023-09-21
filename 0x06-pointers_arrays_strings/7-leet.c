#include"main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
char *ptr = str;
char *letters = "aAeEoOtTlL";
char *replacements = "4433007711";
while (*ptr != '\0')
{
int i = 0;
while (letters[i] != '\0')
{
if (*ptr == letters[i])
*ptr = replacements[i];
i++;
}
ptr++;
}
return (str);
}
