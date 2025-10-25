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
    putchar(' ');
    putchar(' ');
    putchar(product + '0');
}
else
{
    putchar(' ');
    putchar(product / 10 + '0');
    putchar(product % 10 + '0');
}
        }
        _putchar('\n');
    }

}
