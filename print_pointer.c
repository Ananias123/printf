#include "main.h"

/**
 * print_pointer -A function that prints a pointer.
 * @args: arguments to the function
 * Return: an integer
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	long int x;
	int y;
	int i;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	x = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	y = hex_extra(x);
	return (y + 2);
}
