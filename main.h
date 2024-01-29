#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h> 
#include <stdint.h>
#include <string.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_chars(int val);
int _strlen(char *str);
int print_string(char *str);
int print_percentage(void);
void print_number(int n);
int print_unsigned_int(unsigned int n);
void print_mod_i(int n);
int convert_to_binary(unsigned int num);
int octal_conversion(unsigned int num);
int hexadecimal_lw_case_conversion(unsigned int num);
#endif

