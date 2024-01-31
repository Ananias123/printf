#include "main.h"
/**
 * print_STRING - print exclusuives string.
 * @args: parameter for the function.
 * Return: integer.
 */

int print_STRING(va_list args)
{
	char *str;
	int x, length = 0;
	int value;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] < 32 || str[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = str[x];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + extra_hex(value);
		}
		else
		{
			_putchar(str[x]);
			length++;
		}
	}
	return (length);
}
