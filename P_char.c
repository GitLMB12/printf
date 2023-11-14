#include "main.h"

/**
 * printf_char - prints a binary number
 * @path: the arguements to use
 * @count: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list path, int count)
{
	int character = va_arg(path, int);

	_putchar(character);
	return (count + 1);
}
