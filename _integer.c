#include "main.h"

/**
 * _integer - prints an integer number
 * @path: arguments list
 * @count: the count of printed characters
 * Return: updated count of printed characters
 */
int _integer(va_list path, int count)
{
	int num = va_arg(path, int);
	int t = num;
	int dig = (num < 0);
	int digit;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	do {
		dig++;
		t /= 10;
	} while (t != 0);

	while (dig > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < dig; i++)
		{
			pow10 *= 10;
		}

		digit = num / pow10;
		count += _putchar(digit + '0');
		num -= digit * pow10;
		dig--;
	}

	return (count);
}
