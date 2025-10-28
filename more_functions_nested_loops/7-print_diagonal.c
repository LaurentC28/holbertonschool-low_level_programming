#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Write a function that draws diagonal.
 * @n: explains in "betty" that we are working on the variable n
 *
 * Return: no return.
 */

void print_diagonal(int n)
{

	int m = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

		while (m < n)
		{
			_putchar(' ');
			m++;
		}
	_putchar('\\');
	_putchar('\n');
}
