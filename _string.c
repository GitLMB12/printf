#include "main.h"

/**
 * p_string - prints a string
 * @path: numberof arguements
 * @count: the printed characters
 * Return: printed charcaters
 */
int p_string(va_list path, int count)
{
	char *string = va_arg(path, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		count++;
		string++;
	}
	return (count);
}
