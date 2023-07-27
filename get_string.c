#include "main.h"

/**
 * get_precision - main function take
 * the precision value from format string
 * @v: formatted string to pointer
 * @param: the parameters of struct
 * @opi: an argument pointer
 * Return: new pointer with new precentage
*/
char *get_precision(char *v, parameters_t *param , va_list opi)
{
    int w = 0;

    if (*v != '*')
    return(v);
    v++;
    if (*v == '~')
    {
        w == va_arg(opi, int);
        v++;
    }
    else {
        while (_isdigit(*v))
        w = w * 10 + (*v++ - '0');
    }
    param->precision = w;

    return (v);
}
