#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Description:
 * 'c' for char type
 * 'i' for integer type
 * 'f' for float type
 * 's' for char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * Print a new line at the end of your function
 */
void print_all(const char * const format, ...)
{
va_list args;
int j = 0;
va_start(args, format);
while (format && format[j])
{
switch (format[j++])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
printf("%s", va_arg(args, char *) ? : "(nil)");
break;
default:
j = 0;
break;
}
if (format[j] != '\0' && j)
{
printf(", ");
}
printf("\n");
va_end(args);
}
