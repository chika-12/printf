#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdint.h>
/**
 * struct format - struct name
 * @id: argument
 * @f: function parameter
 * description: struct
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;
/**
 * _putchar - print char
 * @c: argument
 * Return: int
 */
int _putchar(char c);
int _printf(const char *format, ...);
int print_chars(va_list val);
int _strlen(char *str);
int print_string(va_list str);
int print_percentage(void);
int print_number(int n);
int print_unsigned_int(va_list val);
int print_mod_i(va_list n);
int convert_to_binary(va_list num);
/**
 * octal_conversion - prints in octal
 * @num: argument
 * Return: int
 */
int octal_conversion(va_list val);/*va_list*/
int hexadecimal_lw_case_conversion(va_list val);/*va_lisy*/
int hex_cap_conversion(va_list val);/* change this to va_list*/
int print_Hex_extra(unsigned int num);/* No va_list*/
int print_exc_string(va_list val);
int print_hex_extra(unsigned long int num);/*No va_list*/
int print_pointer(va_list val);
int print_reverse(va_list val);
int print_rot13(va_list val);
int print_new_unsigned_int(unsigned int n);

#endif

