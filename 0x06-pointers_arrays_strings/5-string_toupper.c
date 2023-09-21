#include"main.h"
/**
 * string_toupper - Converts all lowercase letters to uppercase.
 * @str: Pointer to the input string.
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr -= 32;
ptr++;
}
return (str);
}
