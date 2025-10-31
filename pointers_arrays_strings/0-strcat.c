#include "main.h"
#include <stdio.h>
/**
* *_strcat - Write a function that convert a string to an integer.
* @dest: explains in "betty" that we are working on the pointer dest.
* @src: explains in "betty" that we are working on the pointer src.
* Return: no return.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
