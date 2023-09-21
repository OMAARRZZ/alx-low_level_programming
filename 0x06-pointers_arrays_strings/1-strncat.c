#include"main.h"
/**
 * _strncat - Concatenates n bytes from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 * @n: Maximum number of bytes from src to concatenate.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (ptr);
}
