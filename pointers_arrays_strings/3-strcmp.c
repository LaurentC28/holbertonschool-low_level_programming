#include "main.h"
#include <stdio.h>
/**
* _strcmp - Write a function that compares two strings.
* @s: explains in "betty" that we are working on the pointer s.
* Return: no return.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
