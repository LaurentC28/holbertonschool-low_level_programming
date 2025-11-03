#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function that prints the sum of the two diagonals
* of a square matrix of integers.
* @a: explains in "betty" that we are working on the pointer a.
* @size: explains in "betty" that we are working on the pointer size.
* Return: no return.
*/
void print_diagsums(int *a, int size)
{
	int diag = 0;
	int diag2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		diag += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
		printf("%d, %d\n", diag, diag2);
	}
}
