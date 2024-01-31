#include "main.h"

/**
 * char_print - a function that prints a character
 * @args: Argument to the function
 * Return: 1 for a character, otherwise return 0
 */
int char_print(va_list args)
{
	char chara;

	chara = va_arg(args, int);
	_putchar(chara);
	return (1);
}

