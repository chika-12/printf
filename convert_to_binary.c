#include "main.h"
/**
 * convert_to_binary - This function converts decimal numnbers
 * to binary
 * @num: argument
 * Return: integer
 */
int convert_to_binary(unsigned int num)
{
	unsigned int n;

	if (num > 1)
	{
		convert_to_binary(num / 2);
	}
	n = num % 2;
	print_unsigned_int(n);
	return (1);
}

