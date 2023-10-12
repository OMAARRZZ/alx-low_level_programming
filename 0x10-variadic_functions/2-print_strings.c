#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...) 
{
va_list args;
unsigned int i = 0;
const char *current_str;
va_start(args, n);
while (i < n) 
{
current_str = va_arg(args, const char *);
if (current_str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", current_str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}
