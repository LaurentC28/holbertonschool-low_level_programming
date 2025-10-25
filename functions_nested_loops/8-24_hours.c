#include "main.h"
#include <ctype.h>

/**
 * jack_bauer - print the Jack Bauer time.
 * description - for parameter or int 'n'
 * @n: explains in "betty" that we are working on the variable n
 * Return: void
 */

void jack_bauer(void)
{


    for (int i = 0; i < 24; i++)
	{
    	for (int j = 0; j < 60; j++)
    	{
        _putchar(i / 10 + '0');
        _putchar(i % 10 + '0');
        _putchar(':');
        _putchar(j / 10 + '0');
        _putchar(j % 10 + '0');
        _putchar('\n');
    	}
	}


}