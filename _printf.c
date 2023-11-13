#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	if (!format || !format[0])
	{
		return (-1); }
	int count = 0;
	va_list path;

	va_start(path, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++; }
		if (*format == 'c')
		{
			char character = va_arg(path, int);

			count += _putchar(character); }
		else if (*format == 's')
		{
			const char *str = va_arg(path, const char *);

			count += print_string(str); }
		else if (*format == '%')
		{
			_putchar('%');
			count++; }
		else
		{
			_putchar(*format);
			count++; }
	}
	else
	{
		_putchar(*format);
		count++; }
	format++;
}
va_end(args);
return (count);
}
