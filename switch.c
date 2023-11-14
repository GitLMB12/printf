#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @format: the format specifier
 * @path: number of arguements
 * @count: the printed characters
 * Return: printed charcaters
 */

int selector(const char *format, va_list path, int count)
{
	if (*format == 'd' || *format == 'i')
	{
		count = printf_integer(path, count); }
	else if (*format == 'c')
	{
		_putchar(va_arg(path, int));
		count++; }
	else if (*format == 's')
	{
		count = print_string(va_arg(path, const char*)); }
	else if (*format == '%')
	{
		_putchar('%');
		count++;
	}
	return (count);
}
