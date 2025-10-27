#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: 1 if true 0 if false.
 */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m > 9)
			_putchar (m / 10 + 48);
			_putchar (m % 10 + 48);
		}
	_putchar('\n');
	}
}
