#include "main.h"
#include <ctype.h>

/**
 * jack_bauer - print the Jack Bauer time.
 * description - for parameter or int 'n'
 * Return: void
 */

void times_table(void)
{
int i, j;
    int product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (product < 10)
            {
                _putchar(' ');
            }

            if (product >= 10)
            {
                _putchar(product / 10 + '0');
                _putchar(product % 10 + '0');
            }
            else
            {
                _putchar(product + '0');
            }

            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }

}
