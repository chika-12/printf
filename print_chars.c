#include "main.h"
/**
 * print_chars - prints a char to stdout
 * @val: arguments
 * Return: 1
 */
int print_chars(va_list val)
{
	int num = va_arg(val, int);
	_putchar(num);
	return (1);
}
