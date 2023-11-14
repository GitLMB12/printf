#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list path;

	va_start(path, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = selector(format, path, count);
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(path);
	return (count);
}
