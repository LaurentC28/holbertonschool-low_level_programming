#include "main.h"
#include <ctype.h>

/**
 * print_sign - description checks if the sign of a number.
 * description - for parameter or int 'n'
 * @c: explains in "betty" that we are working on the variable n
 * Return: void
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
