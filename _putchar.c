#include "main.h"
/**
 * _putchar - prints a char to stdout.
 * @c: parameter
 * Return: Char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
