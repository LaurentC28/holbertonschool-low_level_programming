#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char mot[] = "hello";   //declare une chaine
    char *p = mot;  //initialise un pointeur sur le debut de la chaine

    while (*p != '\0')  // tant qu'on est pas à la fin de la chaine
    {
            if (*p >= 'a' && *p <= 'z') // si la valeur pointée est en minuscule
            *p = *p - 32;   // transformer en majuscule
            printf("%c\n",*p);  // affiche le caractere pointé + un retour à la ligne
            p++;    // avance au caractère suivant
    }
    return (0);
}
