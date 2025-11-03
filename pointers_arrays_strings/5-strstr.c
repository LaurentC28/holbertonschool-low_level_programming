#include "main.h"
#include <stdio.h>
/**
* *_strstr - function that searches a string for any of a set of bytes.
* @haystack: explains in "betty" that we are working on the pointer haystack.
* @needle: explains in "betty" that we are working on the pointer needle.
* Return: no return.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
