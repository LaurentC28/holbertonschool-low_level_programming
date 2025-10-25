#include <main.h>

int main(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            /* espace d'alignement */
            if (product < 10)
                _putchar(' ');

            /* afficher le nombre */
            if (product >= 10)
            {
                _putchar(product / 10 + '0');
                _putchar(product % 10 + '0');
            }
            else
            {
                _putchar(product + '0');
            }

            /* ajouter virgule et espace sauf à la fin */
            if (j < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }

    return 0;
}
