#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
char lettre;

for (lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}

_putchar('\n');
}
