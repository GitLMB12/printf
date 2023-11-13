#include "main"

/**
 * print_string - prints a string
 * @str: numberof arguements
 * @i: the printed characters
 * Return: printed charcaters
 */

int print_string(const char *str, int i)
{
	 i = 0;

	if (str == NULL)
	{
		return (write(1, "(Null)", 6));
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
