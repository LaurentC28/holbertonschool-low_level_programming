#include "main.h"
#include <ctype.h>

/**
 * _islower - description checks for lowercase character
 * description - for parameter or int 'c'
 * @c: explains in "betty" that we are working on the variable c
 * Return: void
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
