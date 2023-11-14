#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int printf_char(va_list path, int count);
int print_string(const char *str);
int printf_integer(va_list path, int count);
int printf_binary(unsigned int num, int count);
int _printf(const char *format, ...);
int _x(unsigned int num, int count, int uppercase);
int printf_octal(unsigned int num, int count);
int printf_unsigned(unsigned int num, int count);
int printf_reverse(va_list path, int count);
int printf_pointer(va_list path, int count);
int selector(const char *format, va_list path, int count);

#endif
