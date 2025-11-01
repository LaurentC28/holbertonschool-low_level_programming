#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

    int tab[3] = {10, 20, 30};
    printf("%p\n", tab);      // affiche l’ADRESSE du 1er élément du tableau tab: 0x7ffe850b448c
    printf("%d\n", *tab);     // affiche la VALEUR du 1er élément : 10

    printf("%p\n", tab+1);    // affiche l’ADRESSE du 2eme élément : 0x7ffe850b4490
    printf("%p\n", tab+2);    // affiche l’ADRESSE du 3eme élément : 0x7ffe850b4494
    printf("%p\n", tab+3);    // affiche l’ADRESSE du 4eme élément : 0x7ffe850b4498
    printf("%p\n", tab+4);    // affiche l’ADRESSE du 5eme élément : 0x7ffe850b449c

    printf("%d\n",*(tab + 2));       // affiche la VALEUR de l' élément en position 0+2 en la pointant
    printf("%d\n",tab[2]);       // affiche la VALEUR de l' élément en position 0+2 directement

    printf("%d\n",(*tab + 3));  


    return (0);
}

