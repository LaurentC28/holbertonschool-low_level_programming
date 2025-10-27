#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digit character.
 * @n: working variable.
 *
 * Return: 1 if true 0 if false.
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
