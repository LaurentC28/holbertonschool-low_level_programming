#include "main.h"
#include <stdio.h>
/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: explains in "betty" that we are working on the pointer s.
* @accept: explains in "betty" that we are working on the pointer accept.
* Return: no return.
*/
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;
		
		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
