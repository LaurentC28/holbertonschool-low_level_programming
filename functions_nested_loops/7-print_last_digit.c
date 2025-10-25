#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - description gives the last digit of a number.
 * description - for parameter or int 'n'
 * @n: explains in "betty" that we are working on the variable n
 * Return: void
 */

int print_last_digit(int n)
{
	int m = n % 10;
	if (m<0) m=-m;
	_putchar(m + '0');
return(m);
}
