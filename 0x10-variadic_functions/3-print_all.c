#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the format specifier.
 * @format: Format specifier for the types of arguments.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *sep = "";
int i = 0;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("%s(nil)", sep);
}
else
{
printf("%s%s", sep, str);
}
break;
}
default:
break;
}
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
