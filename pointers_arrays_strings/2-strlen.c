#include "main.h"
#include <stdio.h>
/**
 * _strlen - Write a function that takes a pointer
 * to an int as parameter and updates the value it points to to 98.
 * @s: explains in "betty" that we are working on the variable s
 *
 * Return: no return.
 */

int _strlen(char *s)
{
int compteur = 0;

    while (*s != '\0')
    {
        compteur++;
        s++;
    }
return(compteur);
}
