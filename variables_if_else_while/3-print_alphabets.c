#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase.
 * Description: Prints the alphabet in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettre = 'a';
char lettre2 = 'A';
do {
putchar(lettre);
lettre++;
} while (lettre <= 'z');

do {
putchar(lettre2);
lettre2++;
} while (lettre2 <= 'Z');

putchar('\n');
return (0);
}
