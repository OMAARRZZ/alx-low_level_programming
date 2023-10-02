#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
i++;
}
return (result *sign);
}
