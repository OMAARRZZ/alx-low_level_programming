#include "main.h"
/**
 * _isalpha - checks if c is a letter or not
 * @c - is the value to be checked
 * Return: 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
