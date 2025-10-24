#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char lettre;
char repetition;
for (repetition = 0 ; repetition <= 10 ; repetition++)
{
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}
}
_putchar('\n');
}
