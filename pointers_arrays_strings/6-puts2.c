#include "main.h"
#include <stdio.h>
/**
* rev_string - Write a function that prints every other character of a string,
* starting with the first character, followed by a new line.
* @str: explains in "betty" that we are working on the variable str.
*
* Return: no return.
*/

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
	
		if (str[i] != '\0')
		{
		_putchar(str[i]);
		i = i + 2;
		}
	}
_putchar('\n');
}
