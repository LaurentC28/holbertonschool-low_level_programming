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
	int NbreDeDiese;
	int NbrDeLigne;

	if (size <= 0)
	_putchar('\n');

	for (NbrDeLigne = 0 ; NbrDeLigne < size ; NbrDeLigne++)
	{
		for (NbreDeDiese = 0 ; NbreDeDiese < size ; NbreDeDiese++)
		{
			_putchar ('#');
		}
	_putchar('\n');
	}
}
