#include "main.h"

/**
 * print_reverse - function that prints a string in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_reverse(va_list args)
{

	char *str = va_arg(args, char*);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
