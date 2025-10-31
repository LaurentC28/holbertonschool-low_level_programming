#include "main.h"
#include <stdio.h>
/**
* reverse_array - Write a function that reverses the content
* of an array of integers.
* @a: un tableau d'entiers.
* @n: le nombre d'éléments à inverser.
* Return: no return.
*/

void reverse_array(int *a, int n)
{
	int debut = 0;
	int fin = n - 1;
	int temp = 0;

	while (debut < fin)
	{
		temp = a[debut];
		a[debut] = a[fin];
		a[fin] = temp;
		debut++;
		fin--;
	}


}
