#include "main.h"
#include <stdio.h>
/**
* *leet - Write a function that encodes a string into 1337.
* @str: quelque chose
* Return: no return.
*/

char *leet(char *str)
{
	char lettres[] = "aAeEoOtTlL";
	char chiffres[] = "443370711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lettres[j] != '\0'; j++)
		{
			 if (str[i] == lettres[j])
				{
					str[i] = chiffres[j];
				}
		}
	}
return (0);
}
