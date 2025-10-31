#include "main.h"
#include <stdio.h>
/**
* *cap_string - Write a function that capitalizes all words of a string.
* @str: le nombre d'éléments à inverser.
* Return: no return.
*/

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] = str[0] - ('a' - 'A');

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
