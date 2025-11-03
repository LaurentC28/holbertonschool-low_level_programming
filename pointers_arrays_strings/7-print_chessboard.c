#include "main.h"
#include <stdio.h>
/**
* print_chessboard - function that prints the chessboard.
* @a: explains in "betty" that we are working on the pointer a.
* Return: no return.
*/
void print_chessboard(char (*a)[8])
{
	int ligne;
	int colon;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colon = 0; colon < 8; colon++)
		{
			_putchar(a[ligne][colon]);
		}
		_putchar('\n');
	}
}
