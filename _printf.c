#include "main.h"
#include <unistd.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	while (format[i])
	{
		write(1,&format[i],1);
		i++;
	}
	return (0);
}
