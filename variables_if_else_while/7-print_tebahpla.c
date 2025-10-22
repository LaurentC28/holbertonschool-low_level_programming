#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Display the lowercase alphabet in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
int lettre = 'z';

while (lettre <= 'a')
{
putchar(lettre);
lettre--;
}
putchar('\n');
return (0);
}
