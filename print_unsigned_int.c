#include "main.h"
/**
 * print_unsigned_int - prints number using putchar
 *
 * @n: parameter to function
 * Return: void
 */
int print_unsigned_int(va_list val)
{
	unsigned int new_num;
	unsigned int n = va_arg(val, unsigned int);

	new_num = n;
	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + 48);
	return (1);
}
