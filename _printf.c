#include "main.h"
/**
 * char_print - prints character to stdout
 * @c: formatted character
 * Return: 0
 */

int char_print(char c)
{
	write(1, &c, 1);
	return (-1);
}
/**
 * print_string - formats string
 * @str: formated string
 * Return: 0
 */
int print_string(const char *str)
{
	int len;
	int str_len;

	str_len = 0;
	len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	write(1, str, str_len);
	len += str_len;
	return (len);
}
/**
 * handle_spec - Handles specifiers
 * @format: string to be formatted
 * @args: variable arguments
 * Return: 0
 */
int handle_spec(const char *format, va_list args)
{
	int count;

	count = 0;

	if (*format == 'c')
	{
		count += char_print(va_arg(args, int));
	}
	if (*format == 's')
	{
		count += print_string(va_arg(args, char*));
	}
	if (*format == '%')
	{
		count += char_print('%');
	}
	return (count);
}
/**
 * my_printf - prints formated string
 * @format: parameter
 * Return: 0
 */
int my_printf(const char *format, ...)
{
	int count;
	va_list args;

	count = 0;

	if (format == NULL)
	{
		return (0);
	}

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_spec(format, args);
		}
		else
		{
			count += char_print(*format);
		}
		format++;
	}
	va_end(args);
	return (count);

}

