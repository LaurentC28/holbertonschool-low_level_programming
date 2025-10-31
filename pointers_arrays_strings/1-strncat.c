#include "main.h"
#include <stdio.h>
/**
* *_strncat - Write a function that concatenates two strings.
* @dest: explains in "betty" that we are working on the pointer dest.
* @src: explains in "betty" that we are working on the pointer src.
* @n: explains in "betty" that we are working on the pointer n.
* Return: no return.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
