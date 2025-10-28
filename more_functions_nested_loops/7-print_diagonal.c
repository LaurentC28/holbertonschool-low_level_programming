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

	int esp;
	int lig;

	for (lig = 0 ; lig < n ; lig++)
	{
		for (esp = 0 ; esp < lig ; esp++)
		{
			_putchar (' ');
		}
	_putchar ('\\');
	_putchar('\n');
	}
_putchar('\n');
}
