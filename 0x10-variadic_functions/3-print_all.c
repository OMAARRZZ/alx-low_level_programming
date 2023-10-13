#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_char(char ch) {
    printf("%c ", ch);
}

void print_int(int num) {
    printf("%d ", num);
}

void print_float(float num) {
    printf("%f ", num);
}

void print_string(char *str) {
    if (str == NULL)
        printf("(nil) ");
    if (str != NULL)
        printf("%s ", str);
}

void print_all(const char * const format, ...) {
    const char *ptr = format;
    int arg_index = 0;

    va_list args;
    va_start(args, format);

    while (*ptr) {
        char current_format = *ptr;

        switch (current_format) {
            case 'c':
                print_char((char)va_arg(args, int));
                break;

            case 'i':
                print_int(va_arg(args, int));
                break;

            case 'f':
                print_float((float)va_arg(args, double));
                break;

            case 's':
                print_string(va_arg(args, char*));
                break;
        }

        arg_index++;
        ptr++;
    }

    va_end(args);
    printf("\n");
}
