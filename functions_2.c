#include "main.h"
/**
 * print_from_to - main point claculates
 * the range of char addresses
 * @addres: the sarting adress of pointer
 * @block: stopping
 * @except: an dress to be excepted
 * Return: the number bytes of chars printed
 *
*/

int print_from_to(char *addres, char *block, char *except)
{
    int all_range = 0;

    while (addres <= block)
    {
        if (addres != except)
        {
            all_range += _putchar(*addres);
        }
        addres++;
    }
    return (all_range);
}

/**
 * print_reve - entry point prints revesed string
 * @opi: a list of all arg type string
 * @param: pointer of the parameters struct
 *
 * Return: (all) counted number of bytes Char
*/
int print_reve(va_list opi, parameters_t *param)
{
    char *sdr = va_arg(opi, char *);
    int ln , all = 0;

    (void) param;

    if (sdr)
    {
        for (ln = 0; *sdr; sdr++)
            ln++;
        sdr++;
        for (;ln >0; ln--, sdr--)
            all += _putchar(*sdr);
    }
    return (all);
}
/**
 * print_rot13s - entry point Prints rotated string
 * @opi: list of arguments of string
 * @param: a pointer of the parameters struct
 *
 * Return: Numbers of chars printed rotatedly
 */
 int print_rot13s(va_list opi, parameters_t *param)
{
    int j , x;
    int all = 0;
    char inout[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
    char *s = va_arg(opi, char *);
    (void)param;

    j = 0;
    x = 0;

    while (s[j])
    {
        if ((s[j]  >= 'A' && s[j] <= 'Z')
        || (s[j] >= 'a' && s[j] <= 'z'))
        {
        x = s[j] - 78;
        all += _putchar(inout[x]);
        }
        else
        {
        all += _putchar (s[j]);
        j++;
        }
    }
    return (all);
}
