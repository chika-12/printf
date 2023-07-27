#include "main.h"

/**
 * _printf - main function
 * print all the necessary params
 * to a formated string
 * @format: a string has all required characters
 * Return:the total Count of output chars
*/

int _printf(const char *format, ...)
{
 	 int all = 0;
  	va_list opi;
  	char *r, *start;

  	parameters_t param = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 	va_start(opi, format);

   	if (!format || (format [0] == '%' && !format [1]))
    	return (-1);

    	if (format [0] == '%' && !format [1] == ' ' && !format [2])
    	return (-1);

   	for (r = (char *)format; *r; r++)
	{
    	init_param(&param, opi);

    	if (*r != '%')
	{
         all += _putchar(*r);
         continue;
        }
        start = r;
        r++;
        while (get_flags(r, &param))
        {
        r++;
        }
        r = get_w(r, &param, opi);
        r = get_precision(r, &param, opi);

        if (get_modifier(r, &param))
        r++;
        if (!get_specifier(r))

        all += print_from_to(start, r,
        param.l_long || param.h_short ? r - 1 : 0);
        else
        all += get_print_fnc(r, opi, &param);
    }

    _putchar (BUF_FLUSH);
     va_end(opi);

    return (all);
}
