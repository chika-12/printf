#include "main.h"
/**
 * print_mod_i - prints number using putchar
 *
 * @n: parameter to function
 * Return: void
 */
int print_mod_i(va_list val)
{
	int new_num;
	int n = va_arg(val, int);

	if (n < 0)
	{
		new_num = -n;
		_putchar('-');
	}
	else
	{
		new_num = n;
	}
	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + 48);
	return (1);
}
