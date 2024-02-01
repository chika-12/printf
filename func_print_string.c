#include "main.h"
/**
 * print_string - prints a string to stdout
 *
 * @str: argument to function
 *
 * Return: 0
 */
int print_string(va_list str)
{
	int length;
	char *val = va_arg(str, char*);

	length = _strlen(val);
	while (*val != '\0')
	{
		_putchar(*val);
		val++;
	}
	_putchar(10);
	return (length);
}
