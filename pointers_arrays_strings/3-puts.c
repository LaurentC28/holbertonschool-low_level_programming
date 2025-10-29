#include "main.h"
#include <stdio.h>
/**
* _puts - Write a function that takes a pointer
* and print a string.
* @str: explains in "betty" that we are working on the variable s
*
* Return: no return.
*/

void _puts(char *str)
{

	while (*str != '\0')/*tant qu'on arrive pas a la fin de la chaine*/
	{
	_putchar(*str);/*affiche le caractere pointé*/
	str++;/*passe aucaractere suivant*/
	}
	_putchar('\n');
}

