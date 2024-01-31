#include "main.h"

/**
 * convert_octal - prints an octal number.
 * @args: arguments.
 * Return: counter.
 */
int convert_octal(va_list args)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int number = va_arg(args, unsigned int);
	unsigned int tem = number;

	while (number / 8 != 0)
	{
		number /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 8;
		tem /= 8;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
