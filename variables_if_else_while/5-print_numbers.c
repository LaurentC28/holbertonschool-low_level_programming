#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Display all single digit numbers of base 10.
 * Return: Always 0 (Success)
 */
int main(void)
{
int chiffre;

while (chiffre <= 9)
{
printf("%d", chiffre);
chiffre++;
}
putchar('\n');
return (0);
}
