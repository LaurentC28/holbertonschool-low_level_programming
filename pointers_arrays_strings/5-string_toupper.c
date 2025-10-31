#include "main.h"
#include <stdio.h>
/**
* *string_toupper - Write a function that changes all lowercase
* letters of a string to uppercase.
* @n: le nombre d'éléments à inverser.
* Return: no return.
*/

char *string_toupper(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	i++;
	}
	return (str);
}
