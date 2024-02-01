#include "main.h"
/**
 * convert_to_binary - This function converts decimal numnbers
 * to binary
 * @num: argument
 * Return: integer
 */
int convert_to_binary(va_list num)
{
	int index, count = 0, tmp;
	int *arr = NULL;
	int val = va_arg(num, int);

	tmp = val;

	while (val / 2 != 0)
	{
		val = val / 2;
		count = count + 1;
	}
	arr = malloc(sizeof(int) * (count + 1));
	if (arr == NULL)
	{
		return (0);
	}
	for (index = 0; index < count; index++)
	{
		arr[index] = tmp % 2;
		tmp = tmp / 2;
	}
	for (index = count; index >= 0; index--)
	{
		_putchar(arr[index] + 48);
	}
	free(arr);
	return (1);
}

