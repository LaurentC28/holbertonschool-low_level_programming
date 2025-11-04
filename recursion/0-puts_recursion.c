#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line.
* RECURSIVLY.
* @s: explains in "betty" that we are working on the pointer s.
* Return: no return.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
