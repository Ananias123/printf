#include "main.h"
/**
 * print_int_i - prints integer
 * @val: argument to print
 * Return: integer
 */
int print_int_i(va_list val)
{
	int x = va_arg(val, int);
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

/**
 * print_decimal - prints decimal integer
 * @val: argument to print
 * Return: integer
 */

int print_decimal(va_list val)
{
	int x = va_arg(val, int);
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
