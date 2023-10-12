#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the provided format.
 * @format: The format containing types of arguments to be printed.
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
char current_char;
int int_arg;
float float_arg;
char *str_arg;
va_start(args, format);
while (format && *ptr) 
{
current_char = *ptr;
if (current_char == 'c')
{
printf("%c", va_arg(args, int));
} 
else if (current_char == 'i')
{
int_arg = va_arg(args, int);
printf("%d", int_arg);
} 
else if (current_char == 'f') {
float_arg = (float) va_arg(args, double);
printf("%f", float_arg);
} 
else if (current_char == 's') 
{
str_arg = va_arg(args, char *);
if (str_arg == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str_arg);
}
ptr++;
if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
{
printf(", ");
}
}
printf("\n");
va_end(args);
}
}
