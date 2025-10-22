#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except q and e.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettre = 0;
for (lettre = 'a'; lettre <= 'z'; lettre++)
if (lettre == 'q' || lettre == 'e')
{
continue;
}
else
{
putchar(lettre);
putchar("\n");
}

return (0);
}
