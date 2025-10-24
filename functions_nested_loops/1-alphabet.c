#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettre;

for (lettre = 'a' ; lettre <= 'z' ; lettre++)
{
print_alphabet(lettre);
}

putchar('\n');
return (0);
}