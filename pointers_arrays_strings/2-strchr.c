#include "main.h"
#include <stdio.h>
/**
* *_strchr - Function that locates a character in a string.
* @s: explains in "betty" that we are working on the pointer s.
* @c: explains in "betty" that we are working on the pointer b.
* Return: no return.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
