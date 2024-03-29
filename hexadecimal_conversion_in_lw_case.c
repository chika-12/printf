#include "main.h"
/**
 * hexadecimal_lw_case_conversion - converts number to hexadecimal number
 * @num: argument
 * Return: integer
 */
int hexadecimal_lw_case_conversion(va_list val)
{
	int count = 0, index, tmp;
	int *arr = NULL;
	int num = va_arg(val, int);

	tmp = num;

	while (num / 16 != 0)
	{
		count += 1;
		num = num / 16;
	}
	arr = malloc(sizeof(int) * (count + 1));

	if (arr == NULL)
	{
		return (0);
	}
	for (index = 0; index <= count; index++)
	{
		arr[index] = tmp % 16;
		tmp = tmp / 16;
	}
	for (index = count; index >= 0; index--)
	{
		if (arr[index] > 9)
		{
			arr[index] = arr[index] + 39;
		}
		_putchar(arr[index] + 48);
	}
	free(arr);
	return (count);
}
