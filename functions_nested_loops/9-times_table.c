#include "main.h"

void main(void)
{
    int i, j, product, next;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (product >= 10)
            {
                putchar(product / 10 + '0');
                putchar(product % 10 + '0');
            }
            else
            {
                putchar(product + '0');
            }

            if (j < 9)
            {
                next = i * (j + 1);
                putchar(',');
                putchar(' ');
                if (next < 10)
                    putchar(' ');
            }
        }
        putchar('\n');
    }

}
