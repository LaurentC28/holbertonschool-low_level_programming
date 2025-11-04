#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
* RECURSIVLY
* @s: explains in "betty" that we are working on the pointer s.
* Return: no return.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
