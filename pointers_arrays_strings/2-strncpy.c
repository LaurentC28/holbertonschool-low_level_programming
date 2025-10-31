#include "main.h"
#include <stdio.h>
/**
* *_strncpy - Write a function that copies a string
* @dest: explains in "betty" that we are working on the pointer dest.
* @src: explains in "betty" that we are working on the pointer src.
* @n: explains in "betty" that we are working on the pointer n.
* Return: no return.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
