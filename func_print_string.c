#include "main.h"
/**
 * print_string - prints a string to stdout
 *
 * @str: argument to function
 *
 * Return: 0
 */
int print_string(char *str)
{
	int length;

	length = _strlen(str);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
	return (length);
}
