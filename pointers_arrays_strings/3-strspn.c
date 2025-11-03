#include "main.h"
#include <stdio.h>
/**
* _strspn - function that gets the length of a prefix substring.
* @s: explains in "betty" that we are working on the pointer s.
* @accept: explains in "betty" that we are working on the pointer accept.
* Return: no return.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;
	int found;

	while (*s)
	{
		a = accept;
		found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
