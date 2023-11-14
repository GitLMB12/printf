#include "main.h"

/**
 * _utils - selects the appropriate specifiers
 * @format: the format specifier
 * @path: number of arguements
 * @count: the printed characters
 * Return: printed charcaters
 */

int _utils(const char *format, va_list path, int count)
{
	if (*format == 'd' || *format == 'i')
	{
		count = _integer(path, count); }
	else if (*format == 'c')
	{
		_putchar(va_arg(path, int));
		count++; }
	else if (*format == 's')
	{
		count = p_string(path, count);
	}
	else if (*format == '%')
	{
		_putchar('%');
		count++;
	}
	return (count);
}
