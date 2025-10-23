#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Prints  all possible combinations of single-digit numbers..
 * Return: Always 0 (Success)
 */
int main(void)
{
char chiffre;

for (chiffre = 48 ; chiffre <= 57 ; chiffre++)
{
putchar(chiffre);
if (chiffre != '9')
{
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
