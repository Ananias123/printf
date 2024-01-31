#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	for (; s[length] != 0; length++)
		;
	return (length);
}
/**
 * _strlen_const - returns the length of string in a constant pointer
 * @s: string pointer
 * Return: the length
 */
int _strlen_const(const char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		;
	return (length);
}
