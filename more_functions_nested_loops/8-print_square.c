#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Write a function that draws diagonal.
 * @n: explains in "betty" that we are working on the variable n
 *
 * Return: no return.
 */

void print_square(int size)
{
	int hrz;
	int vert;

	if (size <= 0)
	_putchar('\n');

	for (vert = 0 ; vert < size ; vert++)
	{
		for (hrz = 0 ; hrz < vert ; hrz++)
		{
			_putchar ('#');
		}
	_putchar('\n');
	}
}
