#include "main.h"
#include <stdio.h>
/**
* *_memcpy - function that copies memory area.
* @dest: explains in "betty" that we are working on the pointer dest.
* @src: explains in "betty" that we are working on the pointer src.
* @n: explains in "betty" that we are working on the pointer n.
* Return: no return.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *debut = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (debut);
}
