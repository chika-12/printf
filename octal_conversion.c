#include "main.h"
/**
 * octal_conversion - converts number to octal
 * @num: argument
 * Return: integer
 */
int octal_conversion(va_list val)
{
	int count = 0, index, tmp;
	int *arr = NULL;
	int num = va_arg(val, int);

	tmp = num;

	while (num / 8 != 0)
	{
		count += 1;
		num = num / 8;
	}
	arr = malloc(sizeof(int) * (count + 1));

	if (arr == NULL)
	{
		return (0);
	}
	for (index = 0; index <= count; index++)
	{
		arr[index] = tmp % 8;
		tmp = tmp / 8;
	}
	for (index = count; index >= 0; index--)
	{
		_putchar(arr[index] + 48);
	}
	free(arr);
	return (count);
}
