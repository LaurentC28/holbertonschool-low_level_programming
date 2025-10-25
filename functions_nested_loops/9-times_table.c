#include "main.h"

/**
 * times_tables - print table of 9 aligned.
 * description - for parameter or int 'n'
 * Return: void
 */
void times_table(void)
{
	int i, j, product, next;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			if (j < 9)
			{
				next = i * (j + 1);
				_putchar(',');
				_putchar(' ');
				if (next < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
