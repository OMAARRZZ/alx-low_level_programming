#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    int format_index = 0;
    int arg_index = 0;
    va_list arg;
    char *str;

    va_start(arg, format);

    while (format && format[format_index])
    {
        if (format[format_index] == 'c')
        {
            printf("%c", va_arg(arg, int));
            arg_index++;
        }
        else if (format[format_index] == 'i')
        {
            printf("%d", va_arg(arg, int));
            arg_index++;
        }
        else if (format[format_index] == 'f')
        {
            printf("%f", va_arg(arg, double));
            arg_index++;
        }
        else if (format[format_index] == 's')
        {
            str = va_arg(arg, char *);
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
            arg_index++;
        }

        format_index++;

        if (format[format_index])
            printf(", ");
    }

    va_end(arg);

    printf("\n");
}

