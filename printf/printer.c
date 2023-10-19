/**
 * File: printer.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int print_str(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count += print_char(*str);
        str++;
    }
    return count;
}

int print_char(int c)
{
    return write(1, &c, 1);
}

int print_digit(long digit, int base)
{
    char *finalStr;

    if (base == 10)
        return write(1, &digit, sizeof(int));

    
    return write(1, &digit, 4);
}
