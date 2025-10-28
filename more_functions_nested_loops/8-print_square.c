#include "main.h"
#include <stdio.h>
/**
 * print_square - Write a function that draws diagonal.
 * @size: entry of the function.
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
