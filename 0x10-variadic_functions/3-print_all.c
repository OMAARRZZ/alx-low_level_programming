#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list args)
{
    int c = va_arg(args, int);
    _putchar(c);
}

void print_int(va_list args)
{
    int num = va_arg(args, int);
    int divisor = 1;

    if (num < 0)
    {
        _putchar('-');
        num *= -1;
    }

    while (num / divisor > 9)
        divisor *= 10;

    while (divisor != 0)
    {
        char digit = '0' + num / divisor;
        _putchar(digit);
        num %= divisor;
        divisor /= 10;
    }
}

void print_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
        str = "(nil)";

    while (*str)
    {
        _putchar(*str);
        str++;
    }
}

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                print_char(args);
                break;
            case 'i':
                print_int(args);
                break;
            case 's':
                print_string(args);
                break;
            default:
                break;
        }

        if (format[i + 1])
            _putchar(',');

        i++;
    }

    va_end(args);
    _putchar('\n');
}

