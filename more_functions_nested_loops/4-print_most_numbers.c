#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - display the digits exept 2 and 4.
 *
 * Return: 1 if true 0 if false.
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n + '0');
		n++;
		}
		else
		{
		n++;
		}
	}
	_putchar('\n');
}
