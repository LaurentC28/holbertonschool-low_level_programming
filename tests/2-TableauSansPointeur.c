#include "main.h"
#include <stdio.h>
#include <stdlib.h>

// TABLEAU SANS POINTEUR;
// utilisation d'un compteur.

int main(void)
{
    char mot[] = "hello";   // la chaîne à parcourir

    for (int i = 0; mot[i] != '\0'; i++)
    {
    printf("%c\n", mot[i]);
    }
    return (0);
}
