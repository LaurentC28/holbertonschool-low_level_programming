#include "main.h"
#include <stdio.h>


int _isupper(int n)
{
	if (n >= 'A' && n <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
