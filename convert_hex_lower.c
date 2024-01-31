#include "main.h"

/**
 * convert_hex_lower - a function that prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int convert_hex_lower(va_list val)
{
	int x;
	int *array;
	int counter = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int tem = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = tem % 16;
		tem /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
