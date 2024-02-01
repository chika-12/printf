#include "main.h"

int _printf(const char *format, ...)
{
    match m[] = {
        {"%c", print_chars}, {"%s", print_string}, {"%%", print_percentage},
        {"%d", print_number}, {"%i", print_mod_i}, {"%b", convert_to_binary},
        {"%o", octal_conversion}, {"%u", print_unsigned_int},
        {"%x", hexadecimal_lw_case_conversion}, {"%X", hex_cap_conversion},
        {"%S", print_exc_string}, {"%p", print_pointer}, {"%r", print_reverse},
	{"%R", print_rot13}
    };
    va_list args;
    int i = 0, len = 0;
    int j;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            j = 0;
            while (j < 12)
            {
                if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
                {
                    len += m[j].f(args);
                    i += 2;
                    break;
                }
                j++;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
            i++;
        }
    }

    va_end(args);
    return len;
}

