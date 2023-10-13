#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c);
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
    char *str;
    char c;
    int i = 0;
    double f;
    int j = 0;
    va_start(args, format);
    while (format && format[j])
    {
        switch (format[j++])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                j = 0;
                break;
        }
        if (format[j] != '\0' && j)
            printf(", ");
    }
    printf("\n");
    va_end(args);
}
