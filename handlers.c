#include "main.h"

/**
 * int_param - cleans up struct fields and reset the BUF
 * @param: a parameter of struct
 * @opi: pointer to the argument
 * Return : nothing Void
*/

void init_param(parameters_t *param, va_list opi)
{
    param->unsign     = 0;

    param->space_f   = 0;
    param->hashtag_f = 0;
    param->plus_f    = 0;
    param->minus_f   = 0;
    param->zero_f    = 0;

    param->width     = 0;
    param->precision = UINT_MAX;
    param->h_short = 0;
    param->l_long = 0;

    (void) opi;
}
