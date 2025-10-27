#include "main.h"
#include <stdio.h>
/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 * Return: no return.
 */

void print_line(int n)
{

	int m=0;
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	else
	{
			while (m < n)
			{
				_putchar('_');
				m++;
			}
	_putchar('\n');
	}
}
