#include "main.h"
#include <ctype.h>

/**
 * _isalpha - description checks for alphabetic character
 * description - for parameter or int 'c'
 * @c: explains in "betty" that we are working on the variable c
 * Return: void
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
