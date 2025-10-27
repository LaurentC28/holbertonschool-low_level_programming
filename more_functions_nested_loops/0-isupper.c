#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @n: working variable.
 *
 * Return: 1 if true 0 if false.
 */

int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
