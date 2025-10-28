#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Write a function that draws # in diagonal.
 * @size: entry of the function.
 *
 * Return: no return.
 */

void print_triangle(int size)
{
	
	int esp;
	int lig;
    int resu;

	if (size <= 0)
	_putchar('\n');

	for (lig = 1 ; lig <= size ; lig++)
	{
		for (esp = size - lig ; esp > 0 ; esp--)
		{
        _putchar(' ');
        }
        for (resu = 0 ; resu < lig ; resu++)
        {
        _putchar('#');
        }
    
	_putchar('\n');
	}

}
