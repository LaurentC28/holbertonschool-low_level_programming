#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _atoi - Write a function that convert a string to an integer.
* @s: explains in "betty" that we are working on the pointer dest.
* Return: no return.
*/

int _atoi(char *s)
{
    int i = 0;
    int signe = 1;
    int nombre = 0;

    while (s[i] == ' ')
    {
        i++;
    }
    if (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
        signe = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        nombre = nombre * 10 + (s[i] - '0');
        i++;
    }
    return (nombre * signe);
}
