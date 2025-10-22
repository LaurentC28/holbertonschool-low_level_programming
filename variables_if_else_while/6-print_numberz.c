#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Display all single digit numbers of base 10 without printf.
 * Return: Always 0 (Success)
 */
int main(void)
{
int chiffre = 0;

while (chiffre <= 9)
{
putchar(chiffre + '0');
chiffre++;
}
putchar('\n');
return (0);
}
