#include "main.h"
#include <stdio.h>
/**
* _puts - Write a function that takes a pointer
* and print a string.
* @s: explains in "betty" that we are working on the variable s
*
* Return: no return.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	str++;
	}
	_putchar('\n');
}

