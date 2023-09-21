#include"main.h"
#include <stdbool.h>
/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
char *ptr = str;
bool capitalize_next = true;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
if (capitalize_next)
*ptr -= 32;
capitalize_next = false;
}
else
{
capitalize_next = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' ||
*ptr == '(' || *ptr == ')' || *ptr == '{' ||
*ptr == '}');
}
ptr++;
}
return (str);
}
