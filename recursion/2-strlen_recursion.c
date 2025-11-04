#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string.
* RECURSIVLY
* @s: explains in "betty" that we are working on the pointer s.
* Return: numbers of charactères.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
