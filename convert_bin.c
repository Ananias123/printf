#include "main.h"

/**
 * convert_bin - A function that convert to binary number.
 * @bin: parameter.
 * Return: integer to be converted
 */
int convert_bin(va_list bin)
{
	int flag = 0;
	int count = 0;
	int x, a = 1, b;
	unsigned int number = va_arg(bin, unsigned int);
	unsigned int q;

	for (x = 0; x < 32; x++)
	{
		q = ((a << (31 - x)) & number);
		if (q >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = q >> (31 - x);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
