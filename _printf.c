#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	join p[] = {
		{"%s", print_str}, {"%c", char_print},
		{"%%", print_percent},
		{"%i", print_int_i}, {"%d", print_decimal}, {"%r", print_reverse},
		{"%R", print_rot13}, {"%b", convert_bin},
		{"%u", print_unsigned},
		{"%o", convert_octal}, {"%x", convert_hex_lower}, {"%X", print_hex_upper},
		{"%S", print_STRING}, {"%p", print_pointer}
	};

	va_list args;
	int x = 0, y, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (p[y].cons[0] == format[x] && p[y].cons[1] == format[x + 1])
			{
				length += p[y].f(args);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		length++;
		x++;
	}
	va_end(args);
	return (length);
}
