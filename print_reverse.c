#include "main.h"
/**
 * print_reverse - prints string in reverse
 * @val: argument
 * Return: int
 */
int print_reverse(va_list val)
{
	char *s = va_arg(val, char*);
	int index;
	int len = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		len += 1;
	}
	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	return (len);
}
