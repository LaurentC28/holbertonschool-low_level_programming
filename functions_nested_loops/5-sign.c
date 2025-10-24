#include "main.h"
#include <ctype.h>

/**
 * print_sign - description checks if the sign of a number.
 * description - for parameter or int 'c'
 * @c: explains in "betty" that we are working on the variable c
 * Return: void
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
}
