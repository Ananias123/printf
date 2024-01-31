#include "main.h"

/**
 * print_str - a function that print string
 * @args: argument
 * Return: the length of a string
 */
int print_str(va_list args)
{
	char *str;
	int a;
	int leng;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		leng = _strlen(str);
		for (a = 0; a < leng; a++)
			_putchar(str[a]);
		return (leng);
	}
	else
	{
		leng = _strlen(str);
		for (a = 0; a < leng; a++)
			_putchar(str[a]);
		return (leng);
	}
}
