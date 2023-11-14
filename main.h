#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _char(va_list path, int count);
int p_string(va_list path, int count);
int _integer(va_list path, int count);
int _binary(unsigned int num, int count);
int _printf(const char *format, ...);
int _x(unsigned int num, int count, int uppercase);
int _octal(unsigned int num, int count);
int _unsigned(unsigned int num, int count);
int _reverse(va_list path, int count);
int _pointer(va_list path, int count);
int _utils(const char *format, va_list path, int count);

#endif
