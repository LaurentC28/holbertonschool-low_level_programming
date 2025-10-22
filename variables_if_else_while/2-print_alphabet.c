#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettre = 'a';

do {
putchar(lettre);
lettre++;
} while (lettre <= 'z');
putchar('\n');
return (0);
}
