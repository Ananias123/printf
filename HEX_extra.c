#include "main.h"

/**
 * hex_extra - prints an hexgecimal number.
 * @number: arguments of the function.
 * Return: counter.
 */
int hex_extra(unsigned long int number)
{
	long int a;
	long int *array;
	long int counter = 0;
	unsigned long int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp = temp / 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
