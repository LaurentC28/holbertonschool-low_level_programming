#include "main.h"
#include <stdio.h>
/**
* puts_half - Write a function that prints half of a string, followed by a new line.
* @str: explains in "betty" that we are working on the variable str.
*
* Return: no return.
*/

void puts_half(char *str)
{
int longueur;
int debut;
int i;

longueur = 0;
while (str[longueur] != '\0')
{
	longueur = longueur + 1;
}
if (longueur % 2 == 0)
{
	debut = longueur / 2;
}
else
{
	debut = (longueur - 1) / 2 + 1;
}
i = debut;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i = i + 1;
}
_putchar('\n');
}
