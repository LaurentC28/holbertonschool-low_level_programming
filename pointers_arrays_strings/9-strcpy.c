#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strcpy - WWrite a function that copies the string pointed to by src,
*  including the terminating null byte (\0), to the buffer pointed to by dest.
* Return value: the pointer to destrite a function that prints n elements of an
* array of integers, followed by a new line.
* @dest: explains in "betty" that we are working on the pointer dest.
* @src: explains in "betty" that we are working on the pointer src.
* Return: no return.
*/

char *_strcpy(char *dest, char *src)
{
	int i=0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
