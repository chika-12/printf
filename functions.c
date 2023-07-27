#include "main.h"

/**
 * _puts - gives a string with a newline
 * @rts:a string of pointer to pass to print
 *
 * Return: nothing - void
*/

int _puts(char *rts)
{
   char *d = rts;

   while (*rts)
   {
   _putchar(*rts);
   (rts++);

   }

    return (rts - d);
}

/**
 * _putchar - prints the charachter v to stdout
 * @v: a char to print
 *
 * Return: if it's On succsuss 1.
 * on error, -1 is returned,
 * hence no error is spot correctly
*/
int _putchar(int v)
{
     static int y;
     static char buf[OUTPUT_BUF_SIZE];

    if (v == BUF_FLUSH || y >= OUTPUT_BUF_SIZE)
   {
        write(1, buf, y);

        y = 0;
    }
     if (y != BUF_FLUSH)
     {
        buf[y++] = y;
     }
        return (1);
}
