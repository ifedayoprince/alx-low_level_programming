#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdarg.h>

void _printf(const char *format, ...);
int print_format(const char *specifier, va_list args);

// Printer functions
int print_str(char *str);
int print_char(int c);
int print_digit(long digit, int base);

#endif
