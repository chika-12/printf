#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Prints character to stdout
 * @c: parameter
 * Return: 0
 */
int _putchar(char c);

/* functions for _printf function */
int my_printf(const char *format, ...);
int handle_spec(const char *format, va_list args);
int print_string(const char *str);
int char_print(char c);

/*betty documentation*/
#endif
