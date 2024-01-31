#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct format
{
	char *cons;
	int (*f)();
}join;

int _printf(const char *format, ...);
int _putchar(char c);
int char_print(va_list args);
int print_str(va_list args);
int _strlen(char *s);
int _strlen_const(const char *s);
int print_percent(void);
int print_int_i(va_list val);
int print_decimal(va_list val);
int convert_bin(va_list bin);
int print_unsigned(va_list val);
int convert_octal(va_list args);
int convert_hex_lower(va_list val);
int print_hex_upper(va_list val);
int print_STRING(va_list args);
int print_pointer(va_list args);
int extra_hex(unsigned long int num);
int hex_extra(unsigned long int number);
int print_reverse(va_list args);
int print_rot13(va_list val);
#endif
