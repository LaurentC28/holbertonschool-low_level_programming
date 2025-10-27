#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: 1 if true 0 if false.
 */

void more_numbers(void)
{
int n = 0;
    while (n <= 14)
    {
        if (n <= 0 || n >=9)
        {
        _putchar (n + 48);
        n++;
        }
        else
        {
        _putchar (n / 10 + 48);
        _putchar (n % 10 + 48);
        n++;
        }
    }
_putchar('\n');
}
