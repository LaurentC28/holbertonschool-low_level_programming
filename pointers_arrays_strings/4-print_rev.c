#include "main.h"
#include <stdio.h>
/**
* print_rev - Write a function that takes a pointer that prints a string.
* in reverse.
* @str: explains in "betty" that we are working on the variable s
*
* Return: no return.
*/

void print_rev(char *str)
{
	char *debut = str;
	while (*str != '\0')
	{
	str++;
	}
	str--;
	while (str >= debut)
	{
	_putchar(*str);
	str--;
	}
	_putchar('\n');
}
