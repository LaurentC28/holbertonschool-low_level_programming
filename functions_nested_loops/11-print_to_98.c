#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Description
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    printf("\n");
	return;
}

