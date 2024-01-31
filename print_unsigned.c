#include "main.h"
/**
 * print_unsigned - prints integer
 * @val: argument to print
 * Return: integer
 */
int print_unsigned(va_list val)
{
	unsigned int x = va_arg(val, unsigned int);
	int num1, last = x % 10, digit, exp = 1;
	int  i = 1;

	x = x / 10;
	num1 = x;

	if (last < 0)
	{
		_putchar('-');
		num1 = -num1;
		x = -x;
		last = -last;
		i++;
	}
	if (num1 > 0)
	{
		while (num1 / 10 != 0)
		{
			exp = exp * 10;
			num1 = num1 / 10;
		}
		num1 = x;
		while (exp > 0)
		{
			digit = num1 / exp;
			_putchar(digit + '0');
			num1 = num1 - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
