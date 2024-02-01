#include "main.h"
/**
 * print_new_unsigned_int - prints number using putchar
 *
 * @n: parameter to function
 * Return: void
 */
int print_new_unsigned_int(unsigned int n)
{
	unsigned int new_num;

	new_num = n;
	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + 48);
	return (1);
}
