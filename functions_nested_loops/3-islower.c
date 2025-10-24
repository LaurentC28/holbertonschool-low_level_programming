#include "main.h"
#include <ctype.h>

/**
 * checks for lowercase character
 * description for function _islower
 * description for parameter or member 'c'
 *
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
