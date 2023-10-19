/**
 * File: printf.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

void _printf(const char *format, ...)
{
    va_list args;
    int count =0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
            count += print_format(++format, args);
        else
        {
            count += write(1, format, 1);
        }
        format++;
    }

    va_end(args);
}
