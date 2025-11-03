#include "main.h"
#include <stdio.h>
/**
* _strspn - function that gets the length of a prefix substring.
* @s: explains in "betty" that we are working on the pointer s.
* @accept: explains in "betty" that we are working on the pointer accept.
* Return: no return.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;       /* Compteur des caractères valides au début */
	char *a;
	int found;

	while (*s)                    /* Parcourir chaque caractère de s */
	{
		a = accept;               /* Repartir du début de accept pour chaque caractère de s */
		found = 0;                 

		while (*a)                 /* Parcourir accept */
		{
			if (*s == *a)          /* Si le caractère de s est dans accept */
			{
				found = 1;         /* On a trouvé */
				break;             /* Pas besoin de continuer */
			}
			a++;
		}

		if (!found)                /* Si caractère de s non trouvé dans accept */
			break;                 /* On arrête la boucle */

		count++;                   /* Sinon, on compte ce caractère */
		s++;                        /* On passe au suivant */
	}

	return count;                  /* Retourner le nombre de caractères valides */
}
