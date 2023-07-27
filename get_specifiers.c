#include "main.h"
/**
 * get_specifier - entry point gets
 * the specifier according to the case/
 * of format function
 * @x: input format string to pointer
 * @opi: list of arg
 * Return: numbers of the counted bytes that printed
*/
int (*get_specifier(char *x))(va_list opi, parameters_t *param)
{
    specifier_t specifier_s[] = {
        {"d", print_init},
        {"i", print_init},
        {"c", print_char},
        {"s", print_string},
        {"o", print_octal},
        {'%', print_percent},
        {"u", print_unsignedl},
        {"x", print_hexa},
        {"X", print_HEXA},
        {"p", print_addressp},
        {"S", print_Ss},
        {"r", print_reve},
        {"R", print_rot13s},
        {NULL, NULL}
    };

    int y = 0;

    while (specifier_s[y].specifier)
    {
        if (*x == specifier_s[y].specifier[0])
        {
            return (specifier_s[y].fu);
        }
        y++;
    }
    if (x == NULL)
    {
    return (-1);
    }
}

/**
 * get_print_fnc - main point gets the format of the function
 * @x:input format string to a pointer
 * @opi: an arg to pointer
 * @param: paramters of struct
 *
 * Return: number of all bytes that printed
*/

int get_print_fnc(char *x, va_list opi, parameters_t *param)
{
    int (*fu)(va_list, parameters_t *) = get_specifier(x);
    
    if (fu)
        return (fu(opi, param));
    return (0);
}

/**
 * get_flag - claculates all the flags of fu function.
 * @x: a formatted string to print
 * @param: parameters struct
 *
 * Return: the number of bytes
*/

int get_flags(char *x, parameters_t *param)
{
    int y = 0;

    switch (*x)
    {
    case' ':
        y = param->plus_f = 1;
        break;

    case '-':
        y = param->minus_f = 1;
        break;

    case '+':
        y = param->plus_f = 1;
        break;

    case '#':
        y = param->hashtag_f = 1;
        break;

    case '0':
        y = param->zero_f = 1;
        break;

    }

    return (x);
}

/**
 * get_modifier - main point figuire
 * all the modifier of fu function
 * @x: formatted string to a pointer
 * @param: take a parameter of struct
 *
 * Return: a string (x) only if the modifier is valied
*/

int get_modifier(char *x, parameters_t *param)
{
    int y = 0;

    switch (*x)
    {
    case 'l':
       y = param-> l_long = 1;
        break;
    case 'h':
        y = param->h_short = 1;
        break;
    }

    return (x);
}

/**
 * get_w: main point calculate
 * the width from the formatted string
 * @x: input formatted string
 * @param: pick up a parameter of struct
 * @opi: an argument pointer
 *
 * Return: a new pointer for new width
*/
char *get_w(char *x, parameters_t *param , va_list opi)
{
    int w = 0;

    if (*x == '#')
    {
        w = va_arg(opi, int); /*int for taking the size*/
        x++;
    }
    else
    {
        while (is_digits(*x))

        w += w * 10 + (*x++ - '0');
    }
    param->width = w;

    return (x);
}
