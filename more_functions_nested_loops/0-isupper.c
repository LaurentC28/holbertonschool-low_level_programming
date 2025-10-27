#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @n: working variable.
 *
 * Description: Returns 1 if c is uppercase o otherwise.
 */

int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
