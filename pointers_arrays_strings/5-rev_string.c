#include "main.h"
#include <stdio.h>
/**
* rev_string - Write a function that takes a pointer that prints a string.
* in reverse.
* @str: explains in "betty" that we are working on the variable s
*
* Return: no return.
*/

void rev_string(char *s)
{
	char *debut = s;
	char *fin = s;
	char temp = 0;

	while (*fin != '\0')
	{
		fin++;
	}
	fin--;
	while (debut < fin)
	{
	temp = *fin;
	*fin = *debut;
	*debut = temp;

	debut++;
	fin--;
}
}
